st = input("Enter a String\n")
if len(st) >= 2 and st[:2] == "Is":
    print(st)
else:
    print("Is" + st)
