s = input("Enter a String:\n")
d = {}

for i in s:     #scans the string
    if i not in d:      #scans the dictionary...if not found then make the value 1
        d[i] = 1
    else:               #if found then increases the value by 1
        d[i] += 1
    
print(d)

