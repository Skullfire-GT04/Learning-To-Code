# the main thing about OOP in general is that you always make sure
# your classes are not too complex and not too many
# that's it

"""
Some things I should make clear before committing to teaching you about
OOP in python, the word 'self' refers to the object itself which is instantiated
and the word super refers to the parent class, if it exists.


You always need to provide the 'self' argument to all the methods in a class in Python,
so that you can use the refrence to the current object to do some logic idk.

Btw everytime an object calls any of its methods, it passes itself as an argument
to the function call automatically, so you don't need to pass in the object reference manually
"""



# Here is how you define a class in python
class Animal:

    def __init__(self, name : str): # the dunder methods or magic methods in python are special methods (dunder is short for double underscore btw)
                                    # the __init__ dunder method is called when an object is created, so it is the constructor for objects in python
                                    # you don't necessarily need to have a constructor, but most of the time you do
        self.name = name

    # this is how you make normal methods 
    def walk(self):
        print("The animal is walking.")

    def talk(self):
        print("The animal is talking.")


class Mammal:

    def __init__(self, can_fly = False): # this is how you can set some default valued to arguments in the constructor
        self.can_fly = can_fly

    def fly(self):
        print("The mammal is flying" if self.can_fly else "This mammal cannot fly.")


# this is how you inherit from other classes in python
class Dog(Animal):

    def __init__(self, name):
        super().__init__(name) # this is a call to the parent class's constructor

    # this is how you override methods, you don't need to provide a @override like you do in java
    # just make the function the same name and boom you overrided it
    def talk(self):
        print(f"{self.name} is barking.")

    def walk(self):
        print(f"{self.name} is running.")


dog1 = Dog("Timmy")
print(f"The name of the dog1 is {dog1.name}")
dog1.talk() # as you can see the methods were overriden successfully
dog1.walk()

"""
Method Resolution Order (MRO): when you inherit from multiple classes, there maybe cases where the parent classes
                               share the same function name for one or multiple functions/attributes, but you can only reference parent classes
                               through the 'super' keyword, but you have to specify which parent you are referencing, but when not using the 'super'
                               keyword or the parent className directly, then python resolved function calls or attributes access through a priority
                               list called the MRO, it always begins with the class itself at index 0 and python reads it from left to right

You can actually check a class's MRO by printing it to the console using the built-in class_name.mro() method or the class_name.__mro__ property

When you call a function or access an attribute, python starts from the left of the MRO list and searches for the function name or attribute
in the list of function names and attributes in the class
"""


# this is how multiple inheritance works in python
class Cat(Animal, Mammal):

    def __init__(self, name):
        super().__init__(name = name) # calls the Animal constructor
        super(Animal, self).__init__(can_fly = False) # calls the Mammal constructor
        
    def talk(self):
        print(f"{self.name} is meowing!")

    def walk(self):
        print(f"{self.name} is too sleepy to walk.")


print(f"Here is the MRO order for the cat class {Cat.mro()}")
cat1 = Cat("Tom")
print(f"The name of cat1 is {cat1.name}")
cat1.talk()
cat1.walk()
cat1.fly()