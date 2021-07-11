low = int(input("Enter the starting Value:\n"))
high = int(input("Enter the ending Value:\n"))

for i in range(low,high+1):
    sum = 0
    t1 = i
    while (t1!=0):
        digit = t1%10
        sum = sum + (digit**3)
        t1 = t1//10
    if i==sum:
        print(i,end=",")
    
