import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from scipy import stats

# Load the data
df = pd.read_csv('juvenile.csv')

# Basic EDA
print("Shape:", df.shape)
print("\nHead:")
print(df.head())

print("\nInfo:")
df.info()

print("\nSummary Statistics:")
print(df.describe())

print("\nNull Values:")
print(df.isnull().sum())

print("\nDuplicate Rows:", df.duplicated().sum())

# Descriptive Statistics for 'Cases Reported against Juveniles'
cases = df['Cases Reported against Juveniles - (Col. 3)']
print("\nDescriptive Statistics for 'Cases Reported against Juveniles':")
print("Mean:", cases.mean())
print("Median:", cases.median())
print("Mode:", cases.mode().values[0])

# Variability Measurements
print("\nVariability Measurements for 'Cases Reported against Juveniles':")
print("Range:", cases.max() - cases.min())
print("Variance:", cases.var())
print("Standard Deviation:", cases.std())
print("Interquartile Range:", cases.quantile(0.75) - cases.quantile(0.25))

# Frequency Distribution
print("\nTop 5 Crime Categories by Frequency:")
print(df.nlargest(5, 'Cases Reported against Juveniles - (Col. 3)')[['Crime Head (Col. 2)', 'Cases Reported against Juveniles - (Col. 3)']])

# Percentiles
print("\nPercentiles:")
print(cases.quantile([0.25, 0.5, 0.75, 0.9]))

# Skewness and Kurtosis
print("\nSkewness:", stats.skew(cases))
print("Kurtosis:", stats.kurtosis(cases))

# Visualizations
plt.figure(figsize=(12, 6))
sns.histplot(cases, kde=True)
plt.title('Distribution of Cases Reported against Juveniles')
plt.xlabel('Number of Cases')
plt.ylabel('Frequency')
plt.savefig('distribution.png')
plt.close()

plt.figure(figsize=(12, 6))
sns.boxplot(x=cases)
plt.title('Boxplot of Cases Reported against Juveniles')
plt.xlabel('Number of Cases')
plt.savefig('boxplot.png')
plt.close()

# Correlation heatmap
numeric_df = df.select_dtypes(include=[np.number])
plt.figure(figsize=(12, 10))
sns.heatmap(numeric_df.corr(), annot=True, cmap='coolwarm', linewidths=0.5)
plt.title('Correlation Heatmap of Numeric Variables')
plt.savefig('correlation_heatmap.png')
plt.close()

print("\nVisualization images saved: distribution.png, boxplot.png, correlation_heatmap.png")