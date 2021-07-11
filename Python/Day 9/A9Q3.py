myfile = open("File.txt","r")
i = 0
for line in myfile.readlines():
    if i%2==0:
        print(line,end="")
    i += 1
myfile.close()
