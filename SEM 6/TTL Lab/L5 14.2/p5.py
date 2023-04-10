import numpy as np
import random
n1 = "ayush"
n2= "AAAAA"
a = np.array(list(n1))
b=np.array(list(n2))
x=[]
for i in range(len(n1)):
    x.append(a[i]+b[i])
print(np.array(x))
