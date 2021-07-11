l = []
i = int(input("Enter the no. of elements in the List: "))
for j in range(i):
    l.append(int(input("Enter Value: ")))
print("List is: ",l)

try:
    a = int(input("Enter the index for which you want to see the value...\n"))
    print(l[a])
except:
    print("Error: list index out of range")
finally:
    print("Program run finished")
    
