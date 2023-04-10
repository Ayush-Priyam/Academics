n = int(input("Enter n: "))
s = 0
for i in range(1, n+1, 1):
    for j in range(1, i+1, 1):
        s = s + j
print(f"Sum: {s}")
