'''
Program 1: Write a Program to check whether the Character is Alphabet or not.
Input: v
Output: v is an alphabet.
'''

char = input("Enter one character: ")

if( (char >= 'a' and char <= 'z') or (char >='A' and char <='Z' ) ):
        print(char ," is an Alphabet")
else:
        print(char ," is not an Alphabet")
