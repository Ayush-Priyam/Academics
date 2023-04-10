#Python program to find the maximum element in tuple list
tupList = [(4, 1, 6), (2, 3, 9), (12, 7, 5)]
print("The element of list of tuples are " + str(tupList))
maxVal = max(int(j) for i in tupList for j in i)
print("The Maximum value from the list of tuples is : " + str(maxVal))