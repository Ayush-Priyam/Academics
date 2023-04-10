arr = [1,1,1, 2,2,3,3,3,3,3,6,6 ]
size = len(arr)
c= int(input("Enter no of consec required: "))
x=0
s=set()
for i in range(size - 1):
    if arr[i] == arr[i + 1]:
        x=x+1
    else: 
        x=1
    if(x>=c):
        s.add(arr[i])
print(s)