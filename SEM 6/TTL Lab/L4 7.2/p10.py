#DICT prog to count freq of words
s=input("Enter senetence: ")
f={}
for l in s:
    f[l]=  f.get(l,0) +1
print(f)