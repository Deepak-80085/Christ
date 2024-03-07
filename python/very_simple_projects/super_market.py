def menu():
    return {
        "1": {"name": "per egg", "price": 1.25},
        "2": {"name": "a packet milk", "price": 21},
        "3": {"name": "1kg of rice", "price": 29},
        "4": {"name": "1kg of wheat", "price": 27},
        "5": {"name": "a loaf bread", "price": 5},
        "6": {"name": "exit", "price": 0}
    }

def get_choice():
    print("Enter your choice:")
    for key, value in menu().items():
        print(f"{key}] {value['name']} ${value['price']}")
    return input("Enter your choice: ")

def calculate_total(products):
    total = 0
    for key, value in products.items():
        if key == "6":
            continue
        quantity = int(input(f"Number of {value['name']}: "))
        total += quantity * value['price']
    return total

def main():
    products = menu()
    while True:
        choice = get_choice()
        if choice == "6":
            break
        total = calculate_total(products)
        print(f"The total amount of the products is ${total}")

if  name == "main":
    main()