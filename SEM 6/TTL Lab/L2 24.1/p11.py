n = int(input("Enter a no: "))
a=0
b=1
if n>0:
    print("0", end=", ")
for i in range(1, n):
    c = a + b
    a = b
    b = c
    print(b, end=", ")