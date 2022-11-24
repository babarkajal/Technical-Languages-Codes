#-------- min method ----------------
'''
min(...)
    min(iterable, *[, default=obj, key=func]) -> value
    min(arg1, arg2, *args, *[, key=func]) -> value

    With a single iterable argument, return its smallest item. The
    default keyword-only argument specifies an object to return if
    the provided iterable is empty.
    With two or more arguments, return the smallest argument.
'''
l1= [1,2,3,4,5,6]
print(min(l1))          # returns a min element
l1=[]                   #throws error as empty list
print(min(l1,default = "empty"))            #if we set default parameter as empty it will returned

l1=[1,2,3,4,5]
l2= [100,200,300,400,500]
l3 = [l1,l2]
print(min(l2,l1))
