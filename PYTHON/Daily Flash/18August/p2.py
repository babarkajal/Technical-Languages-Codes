''' you have been given a list of odd numbers between 1 to 10.initilise an array with squares of those add numbers using generator expression
'''
import array as arr
list_odd = list()
for i in range(1,10,2):
    list_odd.append(i)

array_odd = arr.array('i')

#lambda function
val = lambda x: x*x

for i in list_odd:
        array_odd.append(val(i))

print("Squares of odd num ", array_odd)
