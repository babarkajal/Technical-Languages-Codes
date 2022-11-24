'''
Program 2: Write a Program that accepts a String from user. Print Only Vowels
from that String.
Input: HELLO WORLD
Output: Vowels in Entered String: O O
'''
#-------------------------- vowel function ---------------------------------
def isVowel(ch):
    if ch=='a' or ch=='e' or ch == 'i' or ch == 'o' or ch == 'u':
        return True;
    elif ch in ('A','E', 'I' ,'O','U'):
        return True;
    else:
        return False;
#---------------------------------------------------------------------------

#accept string from user
string = input('Enter input string: ')

#print the character from the string
print('Vowels from the string: ')
for i in string:
    #if the character is vowel then print
    if isVowel(i):
        print(i, end=' ')
print()
