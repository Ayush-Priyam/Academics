#tuple prog to check if an element is present or not
tup = (10, 4, 5, 6, 8)
print("The original tuple : ", tup)
N = int(input("value to be checked:"))
if N in tup:
    print("Element is present.")
else:
    print("Not found")
