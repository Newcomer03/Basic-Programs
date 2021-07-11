def perfect(n):
    sum_divisor = 0
    for i in range(1,n):
        if n%i ==0:
            sum_divisor += i
    if n == sum_divisor:
        print("Yes")
    else:
        print("No")
perfect(int(input("Enter a Number:\n")))
