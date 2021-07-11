def isFlip(n):
    c1 = 0
    c0 = 0
    print(n)
    for i in n:
        if i == "0":
            c0 +=1
        else:
            c1 +=1
    if c0==1 or c1==1 :
        return "Yes"
    return "No"
num = input("Enter the binary number:\n")
print(isFlip(num))
