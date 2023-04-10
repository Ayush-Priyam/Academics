a, b, c = float(input("Enter a")), float(input("Enter b ")), float(input("Enter c "))
dis1 = (b**2 - 4*a*c)

# if(dis1<0):
#     print("Imaginary roots")
# else:
#     dis = dis1**0.5
#     print("Root1: ", (-b+ dis)/(2*a))
#     print("Root2: ", (-b- dis)/(2*a))
    
# m, n = int(input("Enter no")), int(input("Enter"))

def eq():
    dis = dis1**0.5
    #print("Eq roots: ", dis)
    return -b/(2*a)

def roots():
    dis = dis1**0.5
    r1 = (-b + dis)/(2*a)
    r2 = (-b - dis)/(2*a)
    return r1,r2

def operations(op):
    switch = {
        '1': eq(),
        '2': roots(),
    }
    return switch.get(op, 'well gg')
    
if dis1==0:
    x= operations('1')
    print("equal roots x=: ", x)
else:
    y,z=operations('2')
    print("roots x1, x2=: ", y,z)
