def dictionary(n):
    d = {}
    for i in range(1,n+1):
        d[i] = i**3
        
    return(d)
n = int(input("Enter the no. of Values:\n"))
print(dictionary(n))
