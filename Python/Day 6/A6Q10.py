def special(s):
    for i in s:
        if i.isalnum()== False and i!=" ":
            return True
    return False
if special(input("Enter the String\n")):
    print("Yes")
else:
    print("No")
