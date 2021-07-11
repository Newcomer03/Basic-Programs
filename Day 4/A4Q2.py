import random

mylist = []
n = int(input("Enter the number of elements:\n"))
for num in range(n):
    ran = random.randint(0,20000)
    mylist.append(ran)
print(mylist)
e = int(input("Ener the element you wanna search for..."))
flag = 0
for i in range(len(mylist)):
    if e==mylist[i]:
        flag += 1
        print("Element found in position ",i)
        break
if flag ==0:
    print("Element not found")
