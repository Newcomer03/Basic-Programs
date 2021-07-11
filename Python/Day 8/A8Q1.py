try:
    x = int(input("Enter the Dividend: "))
    y = int(input("Enter the Divisor: "))
    c = x/y
    print(c)
except:
    print("Error: Division by zero is not possible")
finally:
    print("Program run finished")
    
