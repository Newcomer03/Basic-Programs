num = int(input("Enter a Number\n"))
temp = num

if num<0:
    print("Enter a Positive Number")
else:
    sum = 0
    while(num>0):
        sum  = sum + num
        num = num-1
    print("The Sum is = ",sum)
