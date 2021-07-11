def lowup(s):
    d = {"No. of Upper Case Characters":0,"No. of Lower Case Characters":0}
    for i in s:
        if i.isupper():
            d["No. of Upper Case Characters"] += 1
        elif i.islower():
            d["No. of Lower Case Characters"] += 1
    for key in d:
        print(key," : ",d[key])
lowup(input("Enter a String:\n"))
