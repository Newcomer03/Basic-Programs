def sort_hyphen(s):
    l = s.split("-")
    l.sort()
    print('-'.join(l))
sort_hyphen(input("Enter a sequence seperated by '-'\n"))
