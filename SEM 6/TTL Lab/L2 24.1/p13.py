def isprime(n):
    for i in range(2, n//2):
        if n % i==0:
            return 0
    return 1
n = int(input("Enter a no: "))
x=0
i=3
while x < n:
    if isprime(i)==1:
        print(i, end=', ')
        x=x+1
    i=i+1