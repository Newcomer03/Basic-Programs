num = int(input("Enter a Number: "))
c = 0   #counter variable
if num > 1:
    for i in range(2,num):
        if (num%i)==0:
            c += 1
if c==0:
    print(num," is a Prime Number")
else:
    print(num," is not a Prime Number")
