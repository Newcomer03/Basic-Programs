s = input("Enter a String:\n")
s = s.split()       #splits by keeping delimiter as a space...
d = {}
#now each word of the given string is treated as an individual element
for i in s:         #scans the string for words
    if i not in d:      #scans the dictionary...if not found then make the value 1
        d[i] = 1
    else:               #if found then increases the value by 1
        d[i] += 1
    
print(d)

