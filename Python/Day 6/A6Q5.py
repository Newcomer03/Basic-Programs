def second(l):
    l.sort()
    print(l[1],' ',l[-2])

i = int(input("Enter the total no. of Inputs:\n"))
l = []
for j in range(i):
    num = int(input("Enter value: "))
    l.append(num)
second(l)
        
