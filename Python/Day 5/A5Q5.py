s = input("Enter a String:\n")
s = s + " "         #added a space to avoid error

rev = ""            #now empty...will eventuall store the final result        
k = 0               #points to the initial index of each word
for i in range(1,len(s)):
    temp = ""       #temporarily stores each word and gets empty after each iteration
    if s[i] == " ":
        for j in range(k,i):
            temp = temp + s[j]
            k = i+1
        rev = temp +  " " + rev
        
print(rev)

