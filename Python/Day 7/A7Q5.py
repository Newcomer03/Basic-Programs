#This Program is not generic as I could not figure out
#how to take a nested list and work with it
def recListSum(arr):
    total = 0
    for i in arr:
        if type(i)== type([]):
            total += recListSum(i)
        else:
            total += int(i)
    return total
l = [1,2,[3,4],[5,6]]
sum = recListSum(l)
print(sum)

