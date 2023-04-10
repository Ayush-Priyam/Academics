n = int(input("Enter a no: "))
for i in range(n):
    x=(i+1)%2
    for j in range(i+1):
        print(x, end=" ")
        x = (x+1) % 2
    print()
