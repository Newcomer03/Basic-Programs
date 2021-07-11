myfile = open("File.txt","r")
for ch in myfile.read():
    if ch==" ":
        print("#",end="")
    else:
        print(ch,end="")
myfile.close()
