class A:
    name = ""
    def displayA(self):
        print("A display")
        print(self.name)
    
class B:
    def displayB(self):
        print("B display")
        
class C(A,B):
    def __init__(self, name) -> None:
        self.name = name
    def displayC(self):
        print("C display")
        print(self.name)
        
obj = C("Tahsin")

obj.displayA()
obj.displayB()
obj.displayC()