i = int(input("Enter the starting day number(it should be between 1 and j) :\n"))
j = int(input("Enter the ending day number(it should be between i and 2x10^6) :\n"))
k = int(input("Enter the divisor(it should be between 1 and 2x10^9) :\n"))
nobd = 0        #number of beautiful days
if (i>=1 and i<=j) and (j<=(2*(10**6))) and (k>=1 and k<=(2*(10**9))):
    for num in range(i,j+1):
        rev =0
        t = num
        while(t!=0):
            digit = t%10
            rev = rev*10 + digit
            t = t//10
        if rev>num:
            out = (rev-num)/k
        elif num>rev:
            out = (num-rev)/k
        else:
            out = 0

        if ((out*10)%10)==0:
            nobd += 1
    print(nobd)
else:
    print("Some values among i, j or k might not follow the given condition")
        
