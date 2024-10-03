import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from scipy.stats import shapiro, ttest_ind

# Load the data
df = pd.read_csv('juvenile.csv')

# 1. Calculate the average value (mean)
print("Average (Mean):")
print(df.mean())
print()

# 2. Find the middle value (median)
print("Median:")
print(df.median())
print()

# 3. Determine the most common value (mode)
print("Mode:")
print(df.mode())
print()

# 4. Measure the variation of a value (standard deviation)
print("Standard Deviation:")
print(df.std())
print()

# 5. Visualize the distribution of a value using a histogram, scattered, bar chart, pie chart, box plot, etc.
# Histogram
plt.figure(figsize=(12, 6))
df['Total - Total -'].hist(bins=20)
plt.title('Distribution of Total Crimes')
plt.xlabel('Total Crimes')
plt.ylabel('Frequency')
plt.show()

# Boxplot
plt.figure(figsize=(12, 6))
df.boxplot(column=['Total - Total -'])
plt.title('Boxplot of Total Crimes')
plt.xlabel('Total Crimes')
plt.ylabel('Value')
plt.show()

# 6. Hypothesis tests such as t-test or z-test or Normality test (Shapiro-Wilk)
# Shapiro-Wilk Normality Test
stat, p = shapiro(df['Total - Total -'])
print("Shapiro-Wilk Normality Test:")
print(f"Test Statistic: {stat:.4f}")
print(f"p-value: {p:.4f}")
if p > 0.05:
    print("The data follows a normal distribution.")
else:
    print("The data does not follow a normal distribution.")