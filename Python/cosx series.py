#cos x series 1 - x^2/2! + x^4/4!...
x = float(input("Enter x\n"))
n = int(input("Enter n\n"))
i=0
j=1
term = x
cosx = 0
print("Result: ")
while(j<=n):
    fact = 1.0
    for f in range(i,0,-1):
        fact = fact*f
    if i!=0:
        term = (x**i)/fact
    else:
        term = (x**i)
        
    if j%2==0:
        cosx = cosx - term
    else:
        cosx = cosx + term
    i = i+2
    j = j+1
print(cosx)
