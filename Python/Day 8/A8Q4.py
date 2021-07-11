import time
n = int(input("Enter the no. of items in a dictionary: "))
d = {}
for i in range(n):
    print("Excepting values for User No. : ",i+1)
    U = input("Enter the Username: ")
    d[U] = input("Enter the Password: ")


for j in range(3,0,-1):
    print("<<<Enter Your Login Details>>>")
    userName = input("Enter your UserName: ")
    password = input("Enter the password: ")
    flag = 0
    try:
        for i in d:
            if userName==i:
                if password==d[i]:
                    print("Successful Login.....\n")
                    f = open("File.txt","r")
                    time.sleep(10)
                    print(f.read())
                    flag=1
                    break
        else:
            raise ValueError
    except ValueError:
        if j-1 ==0:
            print("You have already tried 3 times...")
            break
        else:
            print("Invalid input...Try again... ",j-1," tries left")
    finally:
        print("Closing the File")
        f.close()
    if flag==1:
        break
    
    

