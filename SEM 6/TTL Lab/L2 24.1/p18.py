n = int(input("Enter a no: "))
for i in range(n):
    #x = chr(65+i)
    # print(x)
    for j in range(i+1):
        x = chr(65+i-j)
        print(x, end=" ")
    print()
