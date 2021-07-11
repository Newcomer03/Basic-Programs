num = int(input("Enter a Number\n"))
temp = num

if num<0:
    print("Enter a Positive Number")
else:
    sum = 0
    for i in range(num,0,-1):
        sum  = sum + i
    print("The Sum is = ",sum)
