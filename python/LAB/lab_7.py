import pandas as pd
import numpy as np
from scipy.stats import chi2_contingency
import matplotlib.pyplot as plt
import seaborn as sns

# Load the data
data = pd.read_csv('juvenile.csv')

# 1. Cross-tabulation
age_groups = ['Below 12 Years - Total - (Col. 6)', 
              '12 Years & Above and below 16 Years - Total - (Col. 9)',
              '16 Years & Above and below 18 Years - Total - (Col. 12)']

# Select top 10 crimes by total cases
top_crimes = data.nlargest(10, 'Total - Total - (Col. 15)')['Crime Head (Col. 2)']

cross_tab = pd.crosstab(data[data['Crime Head (Col. 2)'].isin(top_crimes)]['Crime Head (Col. 2)'],
                        columns=[data[col] for col in age_groups])

print("Cross-tabulation of Top 10 Crimes vs Age Groups:")
print(cross_tab)
print("\n")

# Visualization for cross-tabulation
plt.figure(figsize=(12, 8))
cross_tab.plot(kind='bar', stacked=True)
plt.title('Distribution of Top 10 Crimes Across Age Groups')
plt.xlabel('Crime Type')
plt.ylabel('Number of Cases')
plt.legend(title='Age Group', bbox_to_anchor=(1.05, 1), loc='upper left')
plt.tight_layout()
plt.savefig('crime_distribution.png')
plt.close()

# 2. Chi-square test
chi2, p_value, dof, expected = chi2_contingency(cross_tab)

print("Chi-square test results:")
print(f"Chi-square statistic: {chi2}")
print(f"p-value: {p_value}")
print(f"Degrees of freedom: {dof}")
print("\n")

# 3. Correlation analysis
numerical_cols = ['Cases Reported against Juveniles - (Col. 3)',
                  'Total - Boys - (Col. 13)',
                  'Total - Girls - (Col. 14)',
                  'Total - Total - (Col. 15)']

correlation_matrix = data[numerical_cols].corr()

print("Correlation Matrix:")
print(correlation_matrix)

# Visualization for correlation matrix
plt.figure(figsize=(10, 8))
sns.heatmap(correlation_matrix, annot=True, cmap='coolwarm', vmin=-1, vmax=1, center=0)
plt.title('Correlation Heatmap of Numerical Variables')
plt.tight_layout()
plt.savefig('correlation_heatmap.png')
plt.close()

# 4. Bar plot of top 10 crimes
plt.figure(figsize=(12, 8))
top_10_data = data.nlargest(10, 'Total - Total - (Col. 15)')
plt.bar(top_10_data['Crime Head (Col. 2)'], top_10_data['Total - Total - (Col. 15)'])
plt.title('Top 10 Juvenile Crimes by Total Cases')
plt.xlabel('Crime Type')
plt.ylabel('Number of Cases')
plt.xticks(rotation=45, ha='right')
plt.tight_layout()
plt.show()