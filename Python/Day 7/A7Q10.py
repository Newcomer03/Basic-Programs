def primeFactList(n,i=2):
    if i<=n:
        if(n%i==0):
            print(i,end=" ")
            primeFactList(n//i,i)
        else:
            primeFactList(n,i+1)
            
    return ""
        

n = int(input("Enter a Number:\n"))
print(primeFactList(n))
