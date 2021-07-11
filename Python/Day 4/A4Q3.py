import random

mylist = []
n = int(input("Enter the number of elements:\n"))
for num in range(n):
    ran = random.randint(0,20000)
    mylist.append(ran)
print(mylist)
e = int(input("Ener the element you wanna search for..."))
flag = 0
l = len(mylist)
mylist.sort()
lp = 0
up = l-1
while(lp<=up):
    mid = (lp+up)//2
    if e==mylist[mid]:
        flag += 1
        print("Element was found")
        break
    elif e<mylist[mid]:
        up = mid-1
    else:
        lp = mid+1
if flag == 0:
    print("Element not found")
