#sin x series x - x^3/3! + x^5/5!...
#not efficient
x = float(input("Enter x\n"))
n = int(input("Enter n\n"))
i=1
j=1
term = x
sinx = 0
print("Result: ")
while(j<=n):
    fact = 1.0
    for f in range(i,0,-1):
        fact = fact*f
    if i!=1:
        term = (x**i)/fact
        
    if j%2==0:
        sinx = sinx - term
    else:
        sinx = sinx + term
    i = i+2
    j = j+1
print(sinx)
