class Vehicle:
    def __init__(self):
        self.name = ""

    def drive(self):
        print(self.name + " is driving")

class Car(Vehicle):
    def __init__(self, name):
        super().__init__()
        self.name = name

obj = Car("Car")
obj.drive()
