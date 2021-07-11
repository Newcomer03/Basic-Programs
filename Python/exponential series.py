x = float(input("Enter x"))
sum = 1.0
n = int(input("Enter n"))
i=1

term = 1

print("Result: ")
while(i<n):
    term = (term*x)/i
    sum = sum + term
    i = i+1
print(sum)
    
