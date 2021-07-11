s = input("Enter a String:\n")
v_c = 0         #vowel counter
c_c = 0         #consonant counter
u_c = 0         #uppercase characters counter
l_c = 0         #lowercase characters counter
d_c = 0         #digit counter
space_c = 0     #space counter
s_c = 0         #special character counter
for i in s:
    if i.isalpha():                 #checks for alphabet
        if i in "aeiouAEIOU":       #checks for vowels
            v_c += 1
        else:                       #if not vowel then consonant
            c_c += 1

        if i.isupper():             #checks for uppercase characters
            u_c += 1
        else:                       #if not uppercase then it is lowercase
            l_c += 1
    elif i.isdigit():               #if not alphabet then checks for digit
        d_c += 1
    else:                           #if not alphanumeric then enters this block
        if i == " ":
            space_c += 1            #checks for spaces
        else:
            s_c += 1                #checks for special characters
print("No. of Vowels : ",v_c)
print("No. of Consonants : ",c_c)
print("No. of Uppercase Characters : ",u_c)
print("No. of Lowercase Characters : ",l_c)
print("No. of Digit : ",d_c)
print("No. of Spaces : ",space_c)
print("No. of Special Characters : ",s_c)
