class A:
    __value = 0
    def __init__(self,value):
        self.__value = value

    def display(self):
        print(self.__value)



obj = A(22)
obj.display()

obj.__value = 44
obj.display()




