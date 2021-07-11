#Shows the attributes of stack

class Stack:
    def __init__(self):
        self.stackarr=[]
    def push(self,item):
        self.stackarr.append(item)
    def pop(self):
        item = self.stackarr[-1]
        del self.stackarr[-1]
        return item
    def display(self):
        for i in range(len(self.stackarr)-1,-1,-1):
            print(self.stackarr[i])
def getChoice():
    print("Menu\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT")
    choice = int(input("Enter Your Choice: "))
    return choice
# Main function starts here....
print("Program Starts")
choice = getChoice()
ob = Stack()

while choice!=4:
    if choice==1:
        item = int(input("Enter value to push"))
        ob.push(item)
    elif choice==2:
        if(len(ob.stackarr)!=0):
            item = ob.pop()
            print("Popped item is ",item)
        else:
            print("Stack Underflow")
    elif choice==3:
        if(len(ob.stackarr)!=0):
            ob.display()
        else:
            print("Stack Underflow")
    else:
        print("Invalid Choice, please choose again\n")
    choice = getChoice()
