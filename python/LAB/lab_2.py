import pandas as pd

def read_csv_file(file_path):
    return pd.read_csv(file_path)

def array_and_slicing_operations(df):
    crime_head = df.iloc[0]['Crime Head (Col. 2)']
    print("First crime:", crime_head)
    print("First letter:", crime_head[0])
    print("Last letter:", crime_head[-1])
    print("Sliced crime name:", crime_head[2:5])

def looping_through_string(df):
    crime_head = df.iloc[0]['Crime Head (Col. 2)']
    print("Characters in the first crime:")
    for char in crime_head:
        print(char)

def length(df):
    crime_head = df.iloc[0]['Crime Head (Col. 2)']
    print("Length of the first crime name:", len(crime_head))

def check_string(df):
    all_crimes = " ".join(df['Crime Head (Col. 2)'])
    print("'Murder' in crimes:", "Murder" in all_crimes)
    print("'Cybercrime' in crimes:", "Cybercrime" in all_crimes)

def concatenate_strings(df):
    first_crime = df.iloc[0]['Crime Head (Col. 2)']
    second_crime = df.iloc[1]['Crime Head (Col. 2)']
    print("Concatenated crimes:", first_crime + " and " + second_crime)

def formatting_strings(df):
    crime = df.iloc[0]['Crime Head (Col. 2)']
    cases = df.iloc[0]['Cases Reported against Juveniles - (Col. 3)']
    print("Old-style formatting: %s has %d reported cases." % (crime, cases))
    print("format() methqod: {crime} has {cases} reported cases.".format(crime=crime, cases=cases))
    print(f"f-string: {crime} has {cases} reported cases.")

def join_strings(df):
    top_5_crimes = df['Crime Head (Col. 2)'].head(5).tolist()
    print("Top 5 crimes:", ", ".join(top_5_crimes))

def f_strings_usage(df):
    for _, row in df.head().iterrows():
        crime = row['Crime Head (Col. 2)']
        total_cases = row['Total - Total - (Col. 15)']
        print(f"Crime: {crime:<30} Total Cases: {total_cases:>5}")

def main(file_path):
    df = read_csv_file(file_path)
    print("Juvenile Crime Data:")
    print(df)
    print("----------------------------------------")
    print("Array-like Operations and String Slicing:")
    array_and_slicing_operations(df)
    print("----------------------------------------")
    print("\nLooping Through Characters:")
    looping_through_string(df)
    print("----------------------------------------")
    print("\nString Length and Multiple Copies:")
    length(df)
    print(" -----------------------------------------")
    print("\nCheck String:")
    check_string(df)
    print("----------------------------------------")
    print("\nConcatenate Strings:")
    concatenate_strings(df)
    print("----------------------------------------")  
    print("\nFormatting Strings:")
    formatting_strings(df)
    print("----------------------------------------")
    print("\nJoin Strings:")
    join_strings(df)
    print("----------------------------------------")
    print("\nF-Strings Usage:")
    f_strings_usage(df)

main("D:\christ\python\LAB\juvenile.csv")