import numpy as np
import random
n= int(input("Enter size: "))
a = np.zeros(n)
for i in range(n):
    a[i] = random.randint(5,20)
print(a)
print(np.flip(a))
