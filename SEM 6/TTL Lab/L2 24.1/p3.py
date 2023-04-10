n = int(input("Enter a no: "))
l = 0
while n != 0:
    l= l*10 +n % 10
    n = n//10
print(l)
