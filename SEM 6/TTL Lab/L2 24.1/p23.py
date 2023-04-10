n = int(input("Enter a no: "))
b= int(input("Enter a base: "))
x=[]
if(b<=1 or n<=0): 
    print("nhk")
else:
    while n >= b:
        x.append(n % b)
        n = n//b
    else:
        x.append(n)
    x.reverse()
    for i in x:
        print(i, end="")
