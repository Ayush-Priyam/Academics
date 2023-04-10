i = int(input("ENter marks: "))
if (i > 100 or i<0):
	print("Invalid")
elif (i >= 90):
	print("O Grade")
elif (i >= 80):
	print("E Grade")
elif (i >= 70):
	print("A Grade")
elif (i >= 60):
	print("B Grade")
elif (i >= 50):
	print("C Grade")
elif (i >= 40):
	print("E Grade")
else:
	print("F")
