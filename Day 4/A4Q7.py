mylist = []
n = int(input("Enter the number of elements:\n"))
for num in range(n):
    mylist.append(int(input("Input element: ")))
mylist = list(dict.fromkeys(mylist))
print(mylist)
