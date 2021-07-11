def posSum(n):
    if n<1:
        return 0
    else:
        return n + posSum(n-2)
    
sum = posSum(int(input("Enter a Number:\n")))
print(sum)
