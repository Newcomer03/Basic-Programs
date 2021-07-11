def armStrong(num):
    temp = num
    sum = 0
    s = str(num)
    l = len(s)
    while (num!=0):
        digit = num%10
        sum += digit**l
        num = num //10
    if temp == sum:
        print(temp," is an Armstrong Number")
    else:
        print(temp," is not an Armstrong Number")
n = int(input("Enter the Number\n"))
armStrong(n)
