def power(a,b):
    if b==0:
        return 1
    else:
        return a*power(a,b-1)
    
    
l = (input("Enter the no. and its power seperated by a comma:\n")).split(",")
a = int(l[0])
b = int(l[1])
sum = power(a,b)
print(sum)
