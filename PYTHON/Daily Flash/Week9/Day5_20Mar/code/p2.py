'''
Program 2: Write a Program that accepts a String from user. Print that string
character by character.
Input: HELLO WORLD
Output: H E L L O W O R L D
'''
#accept string from user
string = input('Enter input string: ')

#print the character from the string
print('Characters from the string: ')
for i in string:
    print(i, end=' ')
print()
