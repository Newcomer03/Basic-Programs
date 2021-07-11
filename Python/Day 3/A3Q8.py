row = int(input("Enter the no. of Rows\n"))
for i in range(row,0,-1):
    if i%2 != 0:
        for space in range(row,i,-1):
            print(" ",end="")
    else:
        for space in range(row-1,i,-1):
            print(" ",end="")
    for j in range(0,i):
        if i%2 != 0:
            print(i,end="")
            print(" ",end="")
        else:
            print(" ",end="")
            print(i,end="")
    print("")
