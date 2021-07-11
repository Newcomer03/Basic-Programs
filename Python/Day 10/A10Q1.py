class Complex:
    count = 0
    def __init__(self,real,img):
        self.real=real
        self.img=img
        Complex.count += 1
    def addComplex(self,ob2):
        return Complex(self.real + ob2.real,self.img + ob2.img)
    def subComplex(self,ob2):
        return Complex(self.real - ob2.real,self.img - ob2.img)
    def mulComplex(self,ob2):
        return Complex((self.real*ob2.real)-(self.img*ob2.img),(self.real*ob2.img)-(self.img*ob2.real))
    def display(self):
        if self.img<0:
            print(self.real,"-",abs(self.img),end="i")
        else:
            print(self.real,"+",self.img,end="i")
    def __del__(self):
        print("Destructor called, object deleted")
        

#Main function starts...


real = int(input("Enter real value for 1st complex number: "))
img = int(input("Enter imaginary value for 1st complex number: "))
ob1 = Complex(real,img)
real = int(input("Enter real value for 2nd complex number: "))
img = int(input("Enter imaginary value for 2nd complex number: "))
ob2 = Complex(real,img)
add = ob1.addComplex(ob2)
sub = ob1.subComplex(ob2)
mul = ob1.mulComplex(ob2)
print("1st Complex No. : ",end="")
ob1.display()
print("\n2nd Complex No. : ",end="")
ob2.display()
print("\nAddition : ",end="")
add.display()
print("\nSubstracion : ",end="")
sub.display()
print("\nMultiplication : ",end="")
mul.display()
print("\nNo. of objects created = ",Complex.count)
