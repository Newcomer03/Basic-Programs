s = input("Enter a String:\n")

rev = ""        #empty string...will store the reversed sting eventually
for i in range(len(s)-1,-1,-1):
    if s[i] != " ":
        rev = rev + s[i]
    else:
        rev = rev + " "
if rev == s:
    print("The given String is Palindrome")
else:
    print("The given String is not Palindrome")
