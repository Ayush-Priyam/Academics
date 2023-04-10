#prog to demonstrate set functions
import random
a,b= set(),set()
c=1
while(c!=0):
    print("1.Randomize 2.Union 3.Intersection 4.Difference 5.Symmetric Diff")
    c=int(input("Enter Choice: "))
    if c>=6 or c<=0:
        print("Ty")
        break
    elif c==1:
        a.clear()
        b.clear()
        for i in range(10):
            a.add(random.randint(0,2000)%20)
            b.add(random.randint(0,2000)%20)
        print(f"Set A: {a}\n Set B:{b}")
    elif c==2:
        print('Union of A and B:', a|b)
    elif c == 3:
        print('Intersection of A and B:', a&b)
    elif c == 4:
        print('Difference of A and B:', a-b)
    elif c == 5:
        print('Symmetric Difference of A and B:', a^b)
