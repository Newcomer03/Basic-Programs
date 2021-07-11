num1 = int(input("Enter the 1st Number\n"))
temp1 = num1
num2 = int(input("Enter the 2nd Number\n"))
temp2 = num2

while temp1 != temp2:
    if temp1>temp2:
        temp1 = temp1-temp2
    else:
        temp2 = temp2-temp1
gcd = temp1 #it can be either temp1 or temp2
lcm = (num1*num2)//gcd

print("GCD= ",gcd)
print("LCM= ",lcm)
