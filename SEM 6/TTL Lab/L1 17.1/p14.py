a,b = int(input("Enter no")), int(input("Enter"))
while True:
    print("1. ADD]\n2. SUB\n3. DIV\n4. MUL\n5.EXIT")
    c1 = int(input("Enter the Choice:"))
    if c1 == 1:
        print(a+b)
    if c1==2:
        print(a-b)
    if c1==3:
        print(a/b)
    if c1==4:
        print(a*b)
    else:
        break
