a="KIITCSIT"
for i in range(8):
    for j in range(8-i):
        print(a[j], end="")
    for j in range(i):
        print("  ", end="")
    for j in range(7-i,-1, -1):
        print(a[j], end="")
    print()
for i in range(2,9):
    for j in range(i):
        print(a[j], end="")
    for j in range(8-i):
        print("  ", end="")
    for j in range(i-1,-1,-1):
        print(a[j], end="")
    print()
