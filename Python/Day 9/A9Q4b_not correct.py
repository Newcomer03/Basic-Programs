import sys
import os
s_details = [("James",5,48.5),("Naomi",6,76.9),("Paul",7,98.2),("Joy",8,96.5)]
f = open("Binary.txt","wb")
for x in s_details:
    f.write(bytes(("%s %s %s" %x),'utf-8'))
    f.write(b"\n")
f.close()
f1 = open("Binary.txt","rb+")
l = f1.readlines()
t = len(l)
x = input("Enter the roll no. that you want to search and update")
x = bytes(str(x),"utf-8")
f1.seek(0)
lp = []
flag = 0
for i in range(t):
    c = f1.tell()
    p = f1.readline()
    lp = p.split()
    print(lp)
    if x in lp[1]:
        f1.seek(c)
        new_name = input("Enter new Name : ")
        new_roll = input("Enter new Roll No. : ")
        new_mark = input("Enter new Marks : ")
        new_t = (new_name,new_roll,new_mark)
        f1.write(bytes(("%s %s %s" %new_t),"utf-8"))
        #f1.write(b"\n")
        print("Record updated successfully.....")
        flag = 1
        break
if flag==0:
    print("Roll No. could not be found")
f1.seek(0)
l = f1.read()
#print(l)
print(l.decode())
f1.close()
