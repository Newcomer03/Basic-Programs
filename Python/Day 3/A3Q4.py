row = int(input("Enter the no. of Rows\n"))

for i in range(1,row+1):
    for j in range(1,i+1):
        if(j<=i):
            print(j,end=" ")
    print("")
