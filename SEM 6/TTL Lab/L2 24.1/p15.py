n = int(input("Enter a no: "))
for i in range(1,n+1):
    for j in range(i):
        print("*", end=" ")
    print("\n")