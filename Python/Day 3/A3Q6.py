row = int(input("Enter the no. of Rows\n"))

for i in range(1,row+1):
    for j in range(1,i+1):
            print(chr(64+j),end=" ")
    print("")
