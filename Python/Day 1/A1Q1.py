inp = input("Press c if you want to give input in celsius or else press f\n")
itemp = int(input("Enter the Temperature\n"))
if (inp == 'c'):
    ftemp = (itemp * (9/5)) + 32
    itemp = str(itemp)
    ftemp = str(ftemp)
    print(itemp + " degree C is " + ftemp + " in Fahrenheit")
else:
    ftemp = (itemp - 32) * (5/9)
    itemp = str(itemp)
    ftemp = str(ftemp)
    print(itemp + "F is " + ftemp + " in Celsius")
