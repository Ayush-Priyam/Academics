#DICT program to replace dictionary value for the given keys in another dictionary
initDict = {'Kolkata': 2, 'Delhi': 1, 'Chennai': 8, 'Mumbai': 3}
newDict = {"Delhi"  : 7, "Mumbai" : 5}
print("Dictionary = ", end = " ")
print(initDict)
for sub in initDict:
    if sub in newDict:
        initDict[sub]  = newDict[sub] 
print("Updated dictionary = ", initDict)