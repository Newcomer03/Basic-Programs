num = int(input("Enter the Number\n"))
temp = num
sum = 0
while (num!=0):
    digit = num%10
    sum += digit**3
    num = num //10
if temp == sum:
    print(temp," is an Armstrong Number")
else:
    print(temp," is not an Armstrong Number")
