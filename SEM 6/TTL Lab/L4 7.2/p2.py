#LIST prog to check if no of occurrences of a no in list>=some value
import random
import collections
n= int(input("Enter size: "))
l=[]
for i in range(n):
    l.append(random.randint(0,2000) % 10)
print(l)
val= random.randint(20, 100)%4+2
print(f"Target freq is {val}\n Elements with frequencies more than {val} are: ", end="")
freq= collections.Counter(l)
#print(freq)
for k, v in freq.items():
    if v> val:
        print(f"{k}", end="")