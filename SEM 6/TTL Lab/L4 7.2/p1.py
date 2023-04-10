#LIST Prog to separate odd and even nos from the list and also sort them individually
import random
n= int(input("Enter size: "))
l,o,e=[],[],[]
for i in range(n):
    l.append(random.randint(0,200000)%100)

for i in l:
    if i%2==0:
        e.append(i)
    else:
        o.append(i)
e.sort()
o.sort()
print(e+o)