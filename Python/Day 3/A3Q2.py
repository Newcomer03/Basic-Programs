low = int(input("Enter the starting Value:\n"))
high = int(input("Enter the ending Value:\n"))
if low == 0:
    low = low+2
if low== 1:
    low = low+1
for i in range(low,high):
       count = 0
       for j in range(2,i):
           if i%j == 0:
               count += 1
       if count == 0:
           print(i,end=",")
    
