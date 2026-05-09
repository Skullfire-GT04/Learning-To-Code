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
a subset of another, or if one set is the upper-set of another and many more.

You can instantiate them using two ways like so:
(i) identifier = {values}
(ii) identifier = set()

If you just using the angled brackets to declare a set, python will interpret it as a dictionary (see below) instead.
"""

# Like
my_set = {1, 2, 3, 4, 5, 5} # notice I stored 5 two times

print(f"my_set: {my_set}") # you will notice the duplicate value was removed automatically

# here is how you can add values
my_set.add(6)

# here is how you can remove an element
my_set.remove(5)

# if you try to remove a non-existent value using .remove then it will throw an error
# to combat this you can use the .discard method instead
# like so
my_set.discard(7) # 7 doesn't exist in the set, but it will not throw an error


# Let's use the in-built operators to interest, unionize, differentiate between two sets
set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}
print(f"Set1 : {set1}, Set2 : {set2}")

# checking the union of two sets
union_set = set1.union(set2)
print(f"set1.union(set2) : {union_set}")
# you can also use the | operator
pipe_union_set = set1 | set2
# let's check if they are the same
print(pipe_union_set == union_set)

# checking the intersection of two sets
intersect_set = set1.intersection(set2)
print(f"set1.intersection(set2) : {intersect_set}")
# you can also use the & operator
ampersand_intersect_set = set1 & set2
# let's check if they are the same
print(ampersand_intersect_set == intersect_set)

# checking the difference of two sets
diff_set = set1.difference(set2)
print(f"set1.difference(set2) : {diff_set}")
# you can also use the - operator
minus_diff_set = set1 - set2
# let's check if they are the same
print(minus_diff_set == diff_set)

# checking the symmetric difference of two sets
sym_diff_set = set1.symmetric_difference(set2)
print(f"set1.symmetric_difference(se2) : {sym_diff_set}")
# you can also use the ^ operator for doing so
caret_sym_diff_set = set1 ^ set2
# let's check if they are the same
print(caret_sym_diff_set == sym_diff_set)


# additionally you can change a set in place using the 
# logical operators like so:
set1 -= set2 # removes element 4 and 5
print(f"New set1 : {set1}")