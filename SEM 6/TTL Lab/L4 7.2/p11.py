#DICT prog Program to print sum of key-value pairs in dictionary
d = {1: 10, 2: 20, 3: 30, 4: 40}
sumkv = []
for key in d:
	sumkv.append(key + d[key])

print("Key-value sum =", sumkv)