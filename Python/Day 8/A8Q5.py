try:
    n = int(input("Enter a nuber whose factorial you wanna find: "))
    if n<=0:
        raise Exception
    
    else:
        fact = 1
        for i in range(n,1,-1):
            fact *= i
        print("The Factorial is: ",fact)
except Exception:
    if n==0:
        print("The Factorial of 0 is : 0")
    else:
        print("Cannot find the factorial of negative numbers...")
except ValueError:
    print("ValueError: invalid literal for int() with base 10: ")
