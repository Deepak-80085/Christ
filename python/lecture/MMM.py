import pandas as pd
# import numpy as np
# import matplotlib.pyplot as plt
# import seaborn as sns
# import csv

data = {'house price':[1500000, 2000000, 2500000, 3000000, 3500000],
		'Height': [170, 175, 180, 185, 190],
		'Weight': [60, 65, 70, 75, 80],
		'Age': [25, 30, 35, 40, 45]}
df = pd.DataFrame(data)
	
mean_height = df['Height'].mean()
print(mean_height)
mean_weight = df['Weight'].mean()
print(mean_weight)
mean_age = df['Age'].mean()
print(mean_age)

median_height = df['Height'].median()
print(median_height)
median_weight = df['Weight'].median()
print(median_weight)
median_age = df['Age'].median()
print(median_age)

mode_height = df['Height'].mode()
print(mode_height)
mode_weight = df['Weight'].mode()
print(mode_weight)
mode_age = df['Age'].mode()
print(mode_age)
