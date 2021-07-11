def pushZero(s):
    b = []
    c = 0
    for i in s:
        if i == '0':
            c += 1
        else:
            b.append(i)
    while(c>0):
        b.append("0")
        c -= 1
    for j in range(len(b)-1):
        print(b[j],end=" ")
    print(b[-1])
pushZero(input("Enter the numbers seperated by spaces:\n").split())
