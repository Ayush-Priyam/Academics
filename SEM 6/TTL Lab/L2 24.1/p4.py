x,y = int(input("Enter a no: ")), int(input("Enter a no: "))
while(y):
    x, y = y, x % y
print(x)