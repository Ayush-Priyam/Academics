def isPrime():
    n = int(input("Enter a no: "))
    fl = 0
    for i in range(2, n//2+1):
        if n % i == 0:
            fl = 1
            break
    if fl == 1:
        print("Not prime")
    else:
        print("Prime")
isPrime()