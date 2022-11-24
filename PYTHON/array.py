
import array

N = int(input())

sample = array.array('i' , list(int(i) for i in input().split(" ")))
'''
for i in range(N):
    sample.append(int(input()))
'''
print(sample)

initial_sum = sum(sample)
print(initial_sum)

x = 0
for i in range(initial_sum):
    if(i*len(sample) > initial_sum):
        x = i
        break;


print("x = ", x)

for i in range(len(sample)):
    sample[i] = x

print(sample)
