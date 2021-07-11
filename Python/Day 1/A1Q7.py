import math

x1 = int(input("Enter the x coordinate of 1st point"))
y1 = int(input("Enter the y coordinate of 1st point"))
x2 = int(input("Enter the x coordinate of 2nd point"))
y2 = int(input("Enter the y coordinate of 2nd point"))

dist = math.sqrt((x1-x2)**2 + (y1-y2)**2)
print("The distance between the given points is: ",dist)
