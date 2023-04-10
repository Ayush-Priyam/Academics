import math
n = int(input("Enter a no: "))
t=n
sum = 0
while n != 0:
    sum = sum+ math.factorial(n%10)
    n = n//10
if sum==t:
    print("Strong")
else:
    print("Not Strong")
