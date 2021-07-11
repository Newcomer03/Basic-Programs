terms = int(input("How many terms do you want?\n"))

#first two terms are 0 and 1
n1=0
n2=1
count = 2

if (terms<=0):
    print("Please enter a positive number")
elif (terms == 1):
    print("Fibonacci Sequence")
    print(n1)
elif (terms == 2):
    print("Fibonacci Sequence")
    print(n1,",",n2)
else:
    print("Fibonacci Sequence")
    print(n1,",",n2,end=" ,")
    for i in range(count,terms):
        nth = n1+n2
        n1 = n2
        n2 = nth
        i += 1
        if i<terms:
            print(nth,end=" ,")
        else:
            print(nth)
