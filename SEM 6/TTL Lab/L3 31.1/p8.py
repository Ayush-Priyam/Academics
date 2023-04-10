def printPat():
    n = int(input("Enter a no: "))
    for i in range(n):
        for j in range(i+1):
            x = chr(65+i-j)
            print(x, end=" ")
        print()
printPat()