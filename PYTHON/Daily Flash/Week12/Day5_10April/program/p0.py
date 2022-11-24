import array


sample1 = array.array('i')
N = int(input("Enter N for array: "))
print("enter",N,"elements in array")
for i in range(N):
    sample1.append(int(input()))

print('Array: ')
for i in sample1:
    print(i,end='  ')
print()

#find min element
minElement = sample1[0]
prev=minElement
for i in sample1:
    
    if i < minElement:
        prev = minElement
        minElement = i

print("Second smallest element in array: ", prev)
    
