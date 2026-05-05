# Python has a lot of in-built data structures bro, and I mean a lot

# Let's start with the most used one which is
# (i) Lists

""""
Lists in python can stores any value and are dynamic in length,
they are 0-indexed like all other languages, it is an iterable
data-structure (see notes).

The format to instantiate a list is like so:
(i) identifier = [values]
(ii) identifier = list()

The second method creates an empty list
"""

# Like
list1 = [1, "Hello", 8.12, 30, "a"]
print("List1 :", list1)

# you can get the length of a list like so
length_list1 = len(list1)
print("Length of list :", length_list1)

# you can add elements at the end of the list with the append method like so
list1.append(10)
print("Appended list :", list1)

# you can get the index of an element using the index method like so
hello_index = list1.index("Hello")
print(f"Index of element 'Hello': {hello_index}")

# you can remove elements from the end of the list using the pop method like so
removed = list1.pop() # the pop method returns the element it removes from the list
print(f"Removed element : {removed}")

# you can also remove elements by index using the pop method like so
list1.pop(2) # this will remove the element at index 2

# you can insert element at a given index using the insert method like so
list1.insert(2, "idk")

# you can also remove elements by providing the element itself using the remove method like so
list1.remove("idk")

# you can access elements using their index through bracket notation like so
print("List1[0] :", list1[0])

# (ii) Tuples

"""
Tuples are very similar to lists in the way that they 
can also store any kind of data, but the difference comes from the fact that
they are immutable by default. You can only instantiate them or convert 
another data structure into a tuple but you can't add or remove elements from a tuple.

It is also an iterable data structure which is also 0-indexed

You can instantiate a tuple in two ways:
(i) identifier = (values)
(ii) identifier = tuple()

The second method creates an empty tuple which for all intents and purposes is kind of 
useless since well you can't add elements to a tuple so there is no way to use the 
second kind of instantiation in any meaningful way
"""

# Like
tuple1 = (1, 2, "Boom", "Goes", "The", "Bomb", 20, 122.12)
print("Tuple1 :", tuple1)

# you can access the length of a tuple using the len method like so
tuple1_length = len(tuple1)
print("Length of tuple1: ", tuple1_length)

# you can access elements by their index using bracket notation like so
print("Tuple1[0] :", tuple1[0])
# but yeah that's about all you can do with tuples 


# (iv) Sets

"""
If you know mathematics and the concept of set theory then this will be a piece of cake for ya,
but all you need to know about sets is that they are mutable, unordered and do not store
duplicate values, and they provide all the basic methods for performing set
operations which are:

(i) Unions (&)
(ii) Intersection (|)
(iii) Difference (-)
(iv) Symmetric Difference (^)

They also provide methods for checking if two sets are disjoint, or if one set is 
a subset of another, or if one set is the upper-set of another. 

They are iterable and 0-indexed.

You can instantiate them using two ways like so:
(i)
"""


