class Computer:
    __fl= 1
    def __init__(self):
        self.__maxprice = 900

    def sell(self):
        print("Selling Price: {}".format(self.__maxprice))

    def __setMaxPrice(self, price):
        self.__maxprice = price
    
    def ok(self, price):
        self.__setMaxPrice(price)

c = Computer()
c.sell()

# change the price
c.__maxprice = 1000
c.sell()

# using setter function
c.ok(1000)
c.sell()
print(c.__fl)