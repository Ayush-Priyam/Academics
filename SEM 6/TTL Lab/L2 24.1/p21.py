n = int(input("Enter n: "))
for i in range(n):
    print(' '*(n-i), end=" ")
    a = 11**i
    rev = 0
    while a > 0:
        r = a % 10
        rev = rev*10 + r
        a //= 10
    while rev > 0:
        r = rev % 10
        print(r, end=" ")
        rev //= 10
    print()
