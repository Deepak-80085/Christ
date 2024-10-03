import pandas as pd

# Read the dataset
df = pd.read_csv('D:\christ\python\lecture\cs_students.csv')

# Calculate the mean
mean = df['score'].mean()

# Calculate the mode
mode = df['score'].mode()

# Calculate the median
median = df['score'].median()

# Calculate the range
range_val = df['score'].max() - df['score'].min()

# Calculate the variance
variance = df['score'].var()

# Print the results
print("Mean:", mean)
print("Mode:", mode)
print("Median:", median)
print("Range:", range_val)
print("Variance:", variance)
