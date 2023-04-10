n = int(input("Enter n : "))
for i in range(1, n+1):
    for j in range(0, n-i+1):
        print(" ", end=" ")
f = 1
for j in range(1, i+1):
    print(" ", f, end=" ")
    f = f * (i - j) // j
    print()
