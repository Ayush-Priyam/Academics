#SET prog to extract all elements only once
import random
n = int(input("Enter size: "))
l = []
s=set()
for i in range(n):
    l.append(random.randint(0, 200000) % n)
print("List: " ,l)
for i in l:
    s.add(i)
print("SET: ", s)