''' Python does not support function oveloading, because it does not allow multiple function definitions with the same name in the same scope'''
class Calculator:
    def add(self, a, b, c=None):
        if c is None:
            return a + b
        else:
            return a + b + c

obj = Calculator()
print(obj.add(1, 2))
print(obj.add(1, 2, 3))
