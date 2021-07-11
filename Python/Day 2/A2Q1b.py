num = int(input("Enter the Number\n"))
temp = num
sum = 0
for i in range(temp):
    dig = temp%10
    sum = sum + dig
    temp = temp//10
    if temp==0:
        break
    
print("The Sum of digits of ",num," is ",sum)
