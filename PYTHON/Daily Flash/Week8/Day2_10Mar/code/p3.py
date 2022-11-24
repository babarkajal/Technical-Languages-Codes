'''
Program 3: Write a Program that computes & prints Cubes of numbers entered
by user using do while loop until user enters a negative number.
'''

print("Enter integers: ")
cube = list()
while True:
    num = int(input())
    if num < 0 :
        break
    cube.append(num**3)

print("Cube of entered intergers: ")
for i in cube:
    print(i,end= "\t")
print()
