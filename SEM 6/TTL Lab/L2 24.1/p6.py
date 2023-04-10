r1, r2=int(input("Enter lowerlimit for range: ")), int(input("Enter upperlimit: "))
e=[]
o=[]
for i in range(r1,r2):
    if(i%2==0):
        e.append(i)
    else:
        o.append(i)
print("ODD", o,"\nEVEN: ",e)