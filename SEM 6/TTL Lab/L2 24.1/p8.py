n = int(input("Enter no: "))
sum=0
for i in range(1, n-1):
    if(n % i == 0):
        sum=sum+i
if sum==n:
    print("Perfect no")
else:
    print("Not perfect")
