class A:
    def __init__(self):
        self.name = "Bob"

    def displayA(self):
        print("A display")
        print("Name from A class:", self.name)

class B(A):
    def displayB(self):
        print("B display")

class C(B):
    def __init__(self, name=""):
        self.name = name

    def displayC(self):
        print("C display")
        print("Name that was inherited from grandparent:", self.name)




# obj = C()
obj = C("Multilevel inheritance")
obj.displayA()
obj.displayB()
obj.displayC()
