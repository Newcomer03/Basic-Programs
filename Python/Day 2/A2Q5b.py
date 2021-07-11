num = int(input("Enter the Number\n"))
temp = num
sum = 0
for i in range(num):
    digit = num%10
    sum += digit**3
    num = num //10
    if num==0:
        break
    
if temp == sum:
    print(temp," is an Armstrong Number")
else:
    print(temp," is not an Armstrong Number")
