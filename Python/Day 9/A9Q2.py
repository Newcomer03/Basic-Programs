myfile = open("File.txt","r")
v_c = 0
c_c = 0
up_c = 0
low_c = 0
num_c = 0
space_c = 0
s_c = 0
for ch in myfile.read():
    if ch.isalpha():
        if ch in "aeiouAEIOU":
            v_c += 1
        else:
            c_c +=1
        if ch.isupper():
            up_c += 1
        if ch.islower():
            low_c +=1
    elif ch in "1234567890":
        num_c += 1
    else:
        if ch==" " or ch== "\n":
            space_c += 1
        else:
            s_c +=1
print("Number of Vowels : ",v_c)
print("Number of Consonants : ",c_c)
print("Number of Upper Case Characters : ",up_c)
print("Number of Lower Case Characters : ",low_c)
print("Number of Numerals : ",num_c)
print("Number of Tabs or Spaces Or New Lines : ",space_c)
print("Number of Special Characters : ",s_c)
myfile.close()
