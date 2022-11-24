import array
import  math


sample1 = array.array('i')
sample2 = array.array('i')
N = int(input("Enter N for array: "))
print("enter",N,"elements in array1")
for i in range(N):
    sample1.append(int(input()))

print()
print("enter",N,"elements in array2")
for i in range(N):
    sample2.append(int(input()))

#array 3
sample3 = array.array('i')
for i in range(N):
    sample3.append(sample1[i])
for i in range(N):
    sample3.append(sample2[i])


print('After concatanation array')
for i in sample3:
    print(i,end="  ")
print()

