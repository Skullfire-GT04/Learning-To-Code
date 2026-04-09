# this is how you make a comment in python

a = 10 # this is how you declare a variable
b = 20

# this is how you do arithematic in python
c = a + b
d = a - b
e = a * b
f = a / b # this is normal division which will yeild a floating point number
g = b % a # should be read as "a modulo b" or simply as a - a * (a // b)
h = b // a # this is floor division which will result in an integer output 

# this is how you print things to the console
print("a =", a, ", b = ", b)
print("a + b :", c)
print("a - b :", d)

# now how to use f-strings, and the old-school .format method
print("{0} * {1}: {2}".format(a, b, e))
print(f'{a} / {b}: {f}')
print(f'{b} % {a}: {g}')
print(f"{b} // {a}: {h}")

# you can use increment and decrement operators like so

a += 10 # adds 10
a -= 10 # substracts 10
a *= 10 # multiples by 10
a /= 10 # divides by 10
a %= 10 # modulos by 10

print()
# this is how you customize the print function

print("Hello, world", end = "!\n") # the "end" argument specify what the function will place ater the argument passed into it like normal

# this is how you take user input from the console
name = input("Tell me your name:")

# this is how you check the length of a data type
# and also how if/else statement works
if len(name) == 0:
    print("Okay you don't wanna tell me your name, guess I will call you hunter.")
else:
    print(f"Hi there {name}")

# string manipulation section

# declaration
string = "Something about this"

# Strings in python are immutable, and we can prove it like so

# also this is how you can catch exceptions
try:
    string[0] = "s"
except TypeError as e:
    print("See, if you try to change the string by indexing it, it will give an error")

# but there is a way to change string, but using arithematic operators like so
string += ", and also about this."

print(f"String after concatenation by another string: {string}")

# you can copy strings like so
new_string = string

# but if you do this then there is a chance you are just copying the pointer in memory to the string
# and not the actual content, so if you change the original string it will reflect in the copied one as well
# which is something we don't want


# you can check if both string point to the same address using the built-in id() function
# which returns the addresses of variables, objects and so on

if id(new_string) == id(string):
    print("Both string point to the same address")
else:
    print("They point to different addresses")

# this is expecially dangerous for copying arrays
# which you declare like so

arr1 = ["a", 123, 120.34, "Hello,", "World!"]

# unlike statically typed languages python arrays or lists, can hold any type of data
# you iterate through and array like so


# this is a for loop which uses the built-in range function
# it will iterate for i = 0 to i = len(arr1) - 1
for i in range(len(arr1)):
    print(arr1[i])

print()

# or you can use a for-each loop like so
for item in arr1:
    print(item)

print()

# or you can use a while loop like so
i = 0
while i < len(arr1):
    print(arr1[i])
    i += 1

# now back to the main topic, copying arrays
arr2  = arr1 # you can do it like so

# but since now they point to the same array in memory, you will have weird behaviours

# like adding element to one array like so
arr1.append(20) # this is how you add single elements at the end to a list in python btw

# will result in you adding an element to the copied array as well
# we can prove it like so
print(arr1)
print(arr2)

# as you can see both of these have the new element which is 20
# and if you remove any element like so

deleted_item = arr1.pop() # pop() removes the last element and returns it
print(f"Deleted item: {deleted_item}")

# and you will see that both arrays are changed
print(arr1)
print(arr2)

print()

# to prevent this from happening you use the .copy function to copy data structures in python
# like so
arr2 = arr1.copy()

# now if we try to change one array it will not reflect in the other
# we can test it like so

arr1.extend([20, 80, 100]) # this is how you add multiple elements to a list btw

print(arr1)
print(arr2)

print()

# array manipulation section

# we have already seen how to declare, add, delete and access items in an array
# but there are more things you can do

# like deleting items based on inden like so

arr2.pop(0) # removes the first element
arr2.pop(2) # removes the third element

# and so on....

# you can also insert elements anywhere like so
arr2.insert(2, 30) # inserts it at index 2
arr2.insert(0, "hello") # inserts it at index 0

print(arr2)

# you can also use increment operators to add string elements like so
arr2 += "Like so" # but this will not do what you think it will do

print(arr2) # it adds the individual elements from the string instead

# you can add two arrays like so
arr3 = arr1 + arr2

print(arr3)

# you can find the index of the first occurence of an element in a list like so
index = arr3.index(20)
print(f'Index of element 20: {index}')

# you can remove elements by passing the element itself as an argument like so
arr3.remove(20)
    
# decision making

# you have the normal if/else statements as we have seen
# but if you want more than two conditions then you use elif like so

age = None # None represents nothing in python, it is like the NULL value in C

while True:
    try:
        age = int(input("Enter your age:")) # btw this is how you cast input into other data types
        break # this is how you break out of a loop
    except Exception as e: # this is how you catch all type of exceptions
        print("Please enter your age correctly !")

# I would like to point out I don't condone anything written in my notes
if age >= 21:
    print("Oh someone is an adult, wanna have a drink?")
elif age >= 18:
    print("What's up little man, wanna vote in the elections?")
else:
    print("You are a child, get lost lol.")

# python provides a very concise way of writing if/else statements like so

message = "Here is a little tip, don't fall in love right now." if age >= 18 else "Don't do drugs!"
print(message)


# Function section

# here is how you declare functions

def foo(): # def is short for define
    print("bar")

# if you want arguments, they go like so

def add(a, b):
    return a + b 

# you can provide default arguments to your function inputs like so

def say_hello(name = "Hunter"):
    print(f"Hello there {name}")

# but you have to put all the arguments with a default value at the end of the function declaration

# this is how you call a function
foo()
say_hello(name)
print(add(1, 2))

# this is how you give type inference for the return type and argument type in python

def do_something(name : str, age : int) -> str:
    return f"Hello {name} you are {age} years old."

# you can embed if/else statement in anything like so
print(do_something(name if name else "Hunter", age))