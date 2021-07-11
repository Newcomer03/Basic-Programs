#Shows the attributes of que

class Stack:
    count = 0
    def __init__(self):
        self.stackarr=[]
        Stack.count=0
    def insert(self,item):
        self.stackarr.append(item)
    def delete(self):
        item = self.stackarr[Stack.count]
        del self.stackarr[Stack.count]
        Stack.count += 1
        return item
    def display(self):
        for i in range(len(self.stackarr)):
            print(self.stackarr[i],end=" ")
            
def getChoice():
    print("\nMenu\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.EXIT")
    choice = int(input("Enter Your Choice: "))
    return choice
# Main function starts here....
print("Program Starts")
choice = getChoice()
ob = Stack()

while choice!=4:
    if choice==1:
        item = int(input("Enter value to insert"))
        ob.insert(item)
    elif choice==2:
        if(len(ob.stackarr)!=0):
            item = ob.delete()
            print("Deleted item is ",item)
        else:
            print("Que Underflow")
    elif choice==3:
        if(len(ob.stackarr)!=0):
            ob.display()
        else:
            print("Stack Underflow")
    else:
        print("Invalid Choice, please choose again\n")
    choice = getChoice()
