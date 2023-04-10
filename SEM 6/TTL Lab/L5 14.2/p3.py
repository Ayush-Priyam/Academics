import numpy as np
import random
n = 10
a = np.zeros(n)
for i in range(n):
    a[i] = random.randint(0, 20000)%50
print(a)
x= np.sort(a[:5])
y=np.sort(a[5:][::-1])
print(x)
print(y)