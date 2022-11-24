'''
Program 2: Write a Program that takes and prints the alphabets in their order
from A to Z using DO-While Loop. Terminate the Program if user breaks the
order of Alphabets.
'''

print("Enter character in a sequence: ")
char = chr(64)
list_of_char = []
while True:
    prev = char
    char = input()
    
    #if character is not equal to prev+1 then break the loop
    if ord(char) != ord(prev)+1:
        break
    list_of_char.append(char)

print(list_of_char)






