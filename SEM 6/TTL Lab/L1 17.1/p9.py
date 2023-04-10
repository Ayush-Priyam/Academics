# from datetime import datetime, timedelta
# dt = datetime(1000, 1, 1, 12, 40, 60)
# print(dt.time())  
# new = dt + timedelta(hours=6, minutes=9, seconds=40)
# print(new)
a = input("Enter 1st time : ")
b = input("Enter 2nd time : ")
ar1 = a.split(":")
ar2 = b.split(":")
h = int(ar1[0]) + int(ar2[0])
m = int(ar1[1]) + int(ar2[1])
s = int(ar1[2]) + int(ar2[2])
if(s > 60):
    m = m + s//60
    s = s % 60
if(m > 60):
    h = h + m // 60
    m = m % 60

print(h, ":", m, ":", s)
