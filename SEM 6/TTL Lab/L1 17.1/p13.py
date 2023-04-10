a=input("Enter alphabet")
if a.isupper()==0 and a.islower()==0:
    print(a.lower())
elif a.isupper():
    print(a.lower())
else:
    print("no change")