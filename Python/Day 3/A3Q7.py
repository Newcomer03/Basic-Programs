row = int(input("Enter the no. of Rows\n"))

for i in range(row,0,-1):
    for j in range(1,row+1):
        if(j<=i):
            print(i,end=" ")
        else:
            print(" ",end=" ")
    print("")
