mylist = []
n = int(input("Enter the number of elements:\n"))
for num in range(n):
    mylist.append(int(input("Input element: ")))
for i in range(1,n):
    temp = mylist[i]
    j = i-1
    while(j>=0 and temp < mylist[j]):
        mylist[j+1] = mylist[j]
        j = j-1
    mylist[j+1] = temp
print(mylist)
