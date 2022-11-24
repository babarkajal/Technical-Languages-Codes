'''
4..Write a Program to accept integer as input in tuple ,print addition of all
elements.
Input:
my_tuple = (4, 2, 3, 8,10)
Output: 27
'''

element = int(input("Enter elements in tuple: "))

my_tuple=tuple()

print("Enter " ,element, " in tuple")
for lc in range(element):
    my_tuple = my_tuple.__add__( tuple([int(input(""))]))
    

sumTuple = 0
for lc in my_tuple:
    sumTuple += lc;

print("Sum of tuple elements: ", sumTuple)

