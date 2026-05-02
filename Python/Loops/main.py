
# here is an implementation of a while loop
i = 0
print("A while loop:")
while i < 10:
    print(f"i : {i}")
    i += 1

"""
The general format it like so:

while condition:
    ..

"""

# here is a simple for range loop
print("A for range loop:")
for i in range(10):
    print(f"i : {i}")

"""
The general format is like so:

for variable_name in range(integral_value):
    ..

"""

# here is a simple for-in loop
print("A for-in loop:")
string = "Today was a good day"
for word in string.split(' '):
    print(word)

"""
The general format is:

for placeholder in iterable_data_structure:
    ..

"""