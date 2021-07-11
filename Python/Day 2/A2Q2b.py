num = int(input("Enter the Number\n"))
temp = num
rev = 0
for i in range(temp):
    digit = temp%10
    rev = rev*10 + digit
    temp = temp //10
    if temp==0:
        break
print("The Reverse of ",num," is ",rev)
