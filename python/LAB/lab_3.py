import pandas as pd


print("Loading the Data:")
mydata = pd.read_csv('juvenile.csv')
print("----------------------------------------------------------------------------")

print("Viewing the Data:")
print("Head of my Data set is:")
print(mydata.head())
print("----------------------------------------------------------------------------")
print("\nFirst 10 records of my Data set is:")
print(mydata.head(10))
print("----------------------------------------------------------------------------")
print("\nTail of my Data set is:")
print(mydata.tail())
print("----------------------------------------------------------------------------")
print("\nLast 10 records of my Data set is:")
print(mydata.tail(10))
print("----------------------------------------------------------------------------")
print("Shape of the Data:")

print("\nShape of my Data set is:")
print(mydata.shape)
print("----------------------------------------------------------------------------")
print("\nInfo of my Data set is:")
mydata.info()
print("----------------------------------------------------------------------------")
print("\nSummary of my Data set is:")
print(mydata.describe(include='all'))
print("----------------------------------------------------------------------------")
print("\nNull values in my Data set:")
print(mydata.isnull().sum())
print("----------------------------------------------------------------------------")
mydata_clean = mydata.dropna()
print("\nShape after dropping null values:")
print(mydata_clean.shape)
print("----------------------------------------------------------------------------")
print("\nDuplicated records of my Data set is:")
print(mydata.duplicated().sum())
print("----------------------------------------------------------------------------")
mydata_unique = mydata.drop_duplicates()
print("\nShape after removing duplicates:")
print(mydata_unique.shape)

print("----------------------------------------------------------------------------")

def remove_outliers(mydata, column):
    Q1 = mydata[column].quantile(0.25)
    Q3 = mydata[column].quantile(0.75)
    IQR = Q3 - Q1
    lower_bound = Q1 - 1.5 * IQR
    upper_bound = Q3 + 1.5 * IQR
    mydata = mydata[(mydata[column] >= lower_bound) & (mydata[column] <= upper_bound)]
    return mydata

print("----------------------------------------------------------------------------")

mydata1 = remove_outliers(mydata, 'Total - Total - (Col. 15)')
print("\nShape after removing outliers:") 
print(mydata1.shape)