v = [1,2,3,4,5]
try:
    v = v[5]/0
except(IndexError,ZeroDivisionError):
    print("Silicon Institute Of Technology",end="")
else:
    print("Bhubaneshwar",end="")
finally:
    print("Odisha",end="")
