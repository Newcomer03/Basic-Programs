num = int(input("Enter a Number: "))
c = 0   #counter variable
i = 2
if num > 1:
    while(i<num):
        if (num%i)==0:
            c += 1
        i += 1
if c==0:
    print(num," is a Prime Number")
else:
    print(num," is not a Prime Number")
