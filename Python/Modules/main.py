"""
Modules in python are the same as libraries in other programming languages
they just contain pre-written code which you use in your own programs.
"""

# it is convention to include all the modules at the top of your source code like so

import math # this command includes all the code defined in the math module

# if you want to include only a particular section of the library, you can do so too like so

from os import path # here we are importing a sub-library called path from the os module

# you can rename the modules you import like so

import datetime as dt # here we are renaming the datetime module as dt

# you can import specific function(s) from a module like so

from time import sleep, time, localtime


# here is how to use modules 

a = 12.343455
b = math.floor(a)
c = math.ceil(a)

print(a, b, c)

def do_something():
    print("Doing something....")
    sleep(2)
    print("Done")

start_time = localtime(time())
print(f"Started function as {start_time}")

do_something()

end_time = localtime(time())
print(f"Ended function at {end_time}")

print(dt.time(12, 20, 0))

