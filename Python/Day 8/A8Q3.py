def isPrime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    return True
while True:
    num = int(input("Enter a Number: "))
    try:
        if num<=0:
            raise Exception("Enter a value Greater than 1\n")
        else:
            if num==1:
                print("1 is neither prime nor composite")
            elif isPrime(num):
                print("Prime")
                break
            else:
                print("Composite")
                break
    except:
        print("Numbers less than zero are not considered")
    

