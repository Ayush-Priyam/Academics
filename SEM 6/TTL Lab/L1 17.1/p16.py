# def aroper(num, a, b):
#     switch = {
#         1: a+b,
#         2: a-b,
#         3: a/b,
#         4: a*b,
#     }
#     return switch.get(num, "Invalid input")

# print("1. ADD]\n2. SUB\n3. DIV\n4. MUL\n5.EXIT")
# a, b = int(input("Enter no")), int(input("Enter"))
# aroper(1,a,b)
a = input("Enter alphabet: ")
if a.isdigit():
    print("digit")
elif a.isalpha():
    print("alphabet")
elif a.isalnum():
    print("alpha numeric")
else:
    print("sp char")
