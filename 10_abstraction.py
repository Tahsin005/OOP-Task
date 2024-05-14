from abc import ABC, abstractmethod

class A(ABC):
    @abstractmethod
    def add(self):
        pass
    
    def displayA(self):
        print("This is from 'A' class")
        
class B(A):
    def __init__(self, a, b):
        self.a = a
        self.b = b
        
    def add(self):
        print(self.a + self.b)
        
obj = B(2, 7)

obj.add()
obj.displayA()