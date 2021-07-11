mylist = []
n = int(input("Enter the number of elements:\n"))
for num in range(n):
    mylist.append(int(input("Input element: ")))
for i in range(len(mylist)):
    #swap = 0
    for j in range(len(mylist)-1-i):
        if mylist[j] > mylist[j+1]:
            temp = mylist[j]
            mylist[j] = mylist[j+1]
            mylist[j+1] = temp
            swap = 1
    #if swap==0:
       # break

print(mylist)
