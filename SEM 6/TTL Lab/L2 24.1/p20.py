n = int(input("Enter a no: "))
for i in range(n, 0, -1):
    for j in range(n-i):
        print("  ", end="")
    for j in range(1,i):
        print(j, end="")
    for j in range(i, 0, -1):
        print(j, end="")
    print()