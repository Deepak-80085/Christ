crimes = ["Murder", "Rape", "Theft", "Robbery", "Burglary"]
ages = ("Below 12 Years", "12 Years & Above and below 16 Years", "16 Years & Above and below 18 Years")
cases = {
    "Murder": 1104,
    "Rape": 1022,
    "Theft": 7325,
    "Robbery": 1226,
    "Burglary": 2628
}
categories = {"Offences Affecting the Human Body", "Offences against the State", "Offences against Public Tranquility", "Offences against Property"}

print("1. Data Structures:")
print("List:", crimes)
print("Tuple:", ages)
print("Dictionary:", cases)
print("Set:", categories)
print()

print("2. List Operations:")
crimes.append("Kidnapping and Abduction")
print("After append:", crimes)

crimes.remove("Burglary")
print("After remove:", crimes)

more = ["Hurt", "Assault on Women"]
crimes = crimes + more
print("After concatenate:", crimes)
print()

print("3. Tuple Operations:")
more = ("18 Years & Above",)
all_ages = ages + more
print("Concatenated tuple:", all_ages)

sliced = all_ages[1:3]
print("Sliced tuple:", sliced)
print()

print("4. Set Operations:")
violent = {"Murder", "Rape", "Assault on Women", "Kidnapping and Abduction"}
property = {"Theft", "Burglary", "Robbery", "Murder"}

print("Union:", violent.union(property))
print("Intersection:", violent.intersection(property))
print("Difference (violent - property):", violent.difference(property))
print()

print("5. Dictionary Operations:")
cases["Kidnapping and Abduction"] = 794
print("After add:", cases)

cases.update({"Hurt": 6809, "Assault on Women": 1305})
print("After update:", cases)

del cases["Robbery"]
print("After removimg robbery:", cases)
