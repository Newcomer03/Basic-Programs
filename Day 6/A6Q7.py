def string(s):
    s += " "
    fin = ""
    for i in range(len(s)-1):
        if s[i] not in "aeiouAEIOU" or s[i+1] not in "aeiouAEIOU":
            fin += s[i]
            
    return(fin)
    
s = input("Enter the String:\n")
print(string(s))
