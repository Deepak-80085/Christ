print("----SIMPLE CALCULATOR ---------")

while True: 
    x = input("Enter an operator [add, sub, multi, div, exit]: ")
    
    if x.lower() == 'exit':
        break 
    
    a = int(input("Enter a: "))
    b = int(input("Enter b: "))
    
    match x:
        case 'add':
            c = a + b
            print("-------------------")
            print(c)
            print("-------------------")
        case 'sub':
            c = a - b
            print("-------------------")
            print(c)
            print("-------------------")
        case 'multi':
            c = a * b
            print("-------------------")
            print(c)
            print("-------------------")
        case 'div':
            if b != 0: 
                c = a / b
                print("-------------------")
                print(c)
                print("-------------------")
            else:
                print("Error:invalid divisor.")
        case _:
            print("Invalid operator. Please try again.")
