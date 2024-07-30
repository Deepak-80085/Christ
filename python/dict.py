my_dict = {"apple": 1, "banana": 2, "cherry": 3}

print(my_dict["apple"])

my_dict["durian"] = 4

my_dict["banana"] = 5

del my_dict["cherry"]

for k, v in my_dict.items():
    print(k, v)
