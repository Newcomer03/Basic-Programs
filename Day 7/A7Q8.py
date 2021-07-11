def geoSum(a,r,n):
    if n==0:
        return 0
    else:
        return a*(pow(r,n-1)) + geoSum(a,r,n-1)

l = (input("Enter a, r and n seperated by spaces:\n")).split()
a = int(l[0])
r = int(l[1])
n = int(l[2])
sum = geoSum(a,r,n)
print(sum)
