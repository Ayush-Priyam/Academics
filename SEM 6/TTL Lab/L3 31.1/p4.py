def gcd(x,y):
    while(y):
        x, y = y, x % y
    print(x)
gcd(int(input("Enter a no: ")), int(input("Enter a no: ")))
