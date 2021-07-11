n = int(input("How many values do you want to enter??\n"))
mylist = []
for i in range(n):
    e = int(input("Enter value... "))
    mylist.append(e)
print(mylist)
flag = 0
maxp = 0
for j in range(n):
    p = 0
    for prime in range(2,mylist[j]):
        if mylist[j]%prime==0:
            p += 1
            break
    if p==0:
        if maxp<=mylist[j]:
            maxp = mylist[j]
if maxp==0:
    print("There was no prime number")
else:
    print("The largest prime number is : ",maxp)
