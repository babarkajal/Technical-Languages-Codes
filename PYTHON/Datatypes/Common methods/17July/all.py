#---------------------- all() --------------------------
# all() method return the boolean value if there is any value is zero then it returns the false other wise AttributeError
# and works same on list,set,tuple,dict
'''Help on built-in function all in module builtins:

all(iterable, /)
    Return True if bool(x) is True for all values x in the iterable.

    If the iterable is empty, return True.
'''

l = [1,2,3,4,5]
print(all(l))               #true
l = [1,2,None]              #None is as zero
print(all(l))               #false
l=[[]]                      #false
print(all(l))
l=[0]
print(all(l))               #false
l = [[0]]
print(all(l))               #true
