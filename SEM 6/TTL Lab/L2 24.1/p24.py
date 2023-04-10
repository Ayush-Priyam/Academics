#24
n = int(input("Enter n: "))
b = int(input("Enter a base: "))
x=0
s=0
while n>0:
    l=n%10;
    if(l>=b):
        print("Invalid number/base.")
        exit()
    s= s+l*(b**x)
    x=x+1
    n=n//10
print(s)