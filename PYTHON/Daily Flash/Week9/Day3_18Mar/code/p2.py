'''
Program 2: Write a Program to print following array.
Arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
Output: 1 2 3 4 5 6 7 8 9
'''

import array as arr

#create a array of type int and having values 
values = arr.array('i',[1,2,3,4,5,6,7,8,9])

print('Array elements are: ')
for i in values:
    print(i,end='  ')
print()


