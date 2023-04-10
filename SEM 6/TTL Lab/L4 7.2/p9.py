#Tuple prog to check if two lists of tuples are identical or not
tupList1 = [(10, 4), (2, 5)]
tupList2 = [(10, 4), (2, 5)]
tupList3 = [(10, 12), (2, 5)]
print("The elements of tuple list 1 : ", str(tupList1))
print("The elements of tuple list 2 : ", str(tupList2))
print("The elements of tuple list 2 : ", str(tupList2))
if(tupList1 == tupList2):
    print("T1 and T2 are identical.")
else:
    print("T1 and T2 are not identical.")
if(tupList1 == tupList3):
    print("T1 and T3 identical.")
else:
    print("T1 and T3 are not identical.")
