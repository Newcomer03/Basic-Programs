def reverse(s):
    rev = ""
    for i in range(len(s)):
        rev = s[i]+rev
    print(rev)
s = input("Enter a String:\n")
reverse(s)
