'''
7.Write a Program to take integer Array from User, then Check if number is
armstrong or strong number, print accordingly.(use numpy array)
Input:
Arr1 = [5, 145, 57, 153]
Output:
153 is armstrong number
'''

from numpy import array

arr = array (list( int(i) for i in (input().split(" "))))
#print(arr)

for lc in arr:
        addCube = 0
        num = lc
        while(num != 0):
            mod = num%10
            addCube += mod*mod*mod
            num //= 10
        if addCube == lc:
            print(lc , " is armstrong number")

