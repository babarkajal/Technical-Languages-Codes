'''
Program 2 : Write a Program t o print cu be of first 20 numbers .
Output:
Cube of 1: 1
Cube of 2: 8
Cube of 3: 27
.
.
.
Cube of 20: 8000
'''

for x in range(20):
    print("Cube of "+ str(x+1) + ": " + str ( (x+1)* (x+1) * (x+1)))
