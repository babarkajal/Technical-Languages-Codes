'''
Program 3: Write a Program to that skips the occurrence of numbers that are
divisible by 7 using continue statement. Print this sequence up to 100.
Output: 1 2 3 4 5 6 8 9 10 11 12 13 15
'''
print("All positive integers except num divisible by 7")
for i in range(100):
    if( (i+1) %7 == 0):
        continue
    else:
        print(i+1, end=" ")
print()
