import pandas as pd

# Load the data
df = pd.read_csv('juvenile.csv')

# 1. Function without arguments
def get_total_cases():
    return df['Cases Reported against Juveniles - (Col. 3)'].sum()

# 2. Function with arguments (Positional arguments)
def get_cases_by_crime_type(crime_type):
    crime_data = df[df['Crime Head (Col. 2)'] == crime_type]
    return crime_data['Cases Reported against Juveniles - (Col. 3)'].sum()

# 3. Function with default arguments
def get_cases_by_age_group(age_group='Total'):
    age_columns = {
        'Below 12 Years': 'Below 12 Years - Total - (Col. 6)',
        '12 to 16 Years': '12 Years & Above and below 16 Years - Total - (Col. 9)',
        '16 to 18 Years': '16 Years & Above and below 18 Years - Total - (Col. 12)',
        'Total': 'Total - Total - (Col. 15)'
    }
    if age_group in age_columns:
        return df[age_columns[age_group]].sum()
    else:
        return "Invalid age group specified."


print("Total cases:", get_total_cases())
print("Murder cases:", get_cases_by_crime_type("Murder"))
print("Cases for 12 to 16 Years:", get_cases_by_age_group("12 to 16 Years"))
print("Total cases across all age groups:", get_cases_by_age_group())