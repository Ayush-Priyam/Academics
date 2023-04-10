#12
n = int(input("Enter a no: "))
a = 1
if n > 0:
    print("1", end=", ")
for i in range(1, n):
    b=a*2+1
    print(b, end=", ")
    a=b
