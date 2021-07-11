num = int(input("Enter the Number\n"))
temp = num
sum = 0
while (num!=0):
    digit = num%10
    sum += digit
    num = num //10
print("The Sum of digits of ",temp," is ",sum)
