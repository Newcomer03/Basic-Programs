def isPrime(num):
    if num > 1:
        for i in range(2,num):
            if (num%i)==0:
                return False
        return True
def is_semiPrime(n):
    for d1 in range(2,int(n**0.5)+1):
        if n%d1 == 0:
            d2 = n//d1
            return isPrime(d1) and isPrime(d2) and d1!=d2
    return False
def is_checkNum(n):
    for i in range(2,n):
        if(is_semiPrime(i) and is_semiPrime(n-i)):
            print(i," ",n-i)
            return "Yes"
    return "No"
N = int(input("Enter a number:\n"))
print(is_checkNum(N),end=" ")
