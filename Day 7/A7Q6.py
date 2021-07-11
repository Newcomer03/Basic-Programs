def digitSum(n):
    if n<10:
        return n
    else:
        return digitSum(n%10 + digitSum(n//10))
    
sum = digitSum(int(input("Enter a Number:\n")))
print(sum)
