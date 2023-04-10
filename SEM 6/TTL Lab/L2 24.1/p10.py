pf=set()
n = int(input("Enter a no: "))
i=2
sum = 0
while n != 1:
    if(n%i==0):
        pf.add(i)
        n=n/i
    else:
        i=i+1
print(pf)