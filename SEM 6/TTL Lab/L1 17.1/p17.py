m, n = int(input("Enter no")), int(input("Enter"))
def add():
    return n+m
def subs():
    return n-m
def prod():
    return n*m
def div():
    return m/n
def rem():
    return m % n

def operations(op):
    switch = {
        '+': add(),
        '-': subs(),
        '*': prod(),
        '/': div(),
        '%': rem(),
    }
    return switch.get(op, 'Invalid')

print(operations(input("Enter operator")))
