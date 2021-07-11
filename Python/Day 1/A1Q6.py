p = float(input("Enter Principal Amount\n"))
r = int(input("Enter Rate of Interest\n"))
t = int(input("Enter Time in Years\n"))

ci = p*((1+(r/100))**t)

a = p + ci
a = str(a)
print("The future amount is = "+a)
