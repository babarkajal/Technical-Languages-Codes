'''
8.Write a program that Accepts Integer Array from User,and Print Occurrence
Count of 1 .(use numpy array)
Input:
Arr1 = [1 ,2 ,3, 11, 71, 19, 16]
Output: 1 Appeared 6 times
'''

from numpy import array

print("Enter elements in array: ")

arr = array (list( int(i) for i in (input().split(" "))))
#print(arr)


count = 0
for lc in arr:
        num = lc
        while(num != 0):
            mod = num%10

            #if any occurance of 1 found inc count
            if(mod == 1):
                count +=1
            num //= 10

print("1 appeared "+ str(count) + " times in an array")
