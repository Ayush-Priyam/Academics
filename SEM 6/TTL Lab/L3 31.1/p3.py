def rev(n):
    l = 0
    while n != 0:
        l = l*10 + n % 10
        n = n//10
    print(l)
rev(int(input("Enter a no: ")))
