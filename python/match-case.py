print("----SIMPLE CALCULATOR ---------")
x = input(str("Enter a operatoer [add,sub,multi,div] "))
a = int(input("Enter a : "))
b =int(input("Enter b : "))
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
        c = a/b
        print("-------------------")
        print(c)
        print("-------------------")