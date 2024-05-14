class Animal:
    def sound(self):
        print("Animal sound")
        
class Cat(Animal):
    def sound(self):
        print("Meow meow meow meow meow meow meow meow")
        
class Dog(Animal):
    def sound(self):
        print("Woof woof woof woof woof woof woof woof")
        
animal = Animal()
animal.sound()

cat = Cat()
cat.sound()

dog = Dog()
dog.sound()