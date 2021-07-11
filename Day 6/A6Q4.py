def sentence(s):
    u = 0
    l = 0
    for i in s:
        if i.isupper():
            u += 1
        if i.islower():
            l += 1
            
    print(u," ",l)
s = input("Enter a Sentence:\n")
sentence(s)
