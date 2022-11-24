'''
Program 2: Write a Program to check whether the Character is Vowel or
Consonant.
Input: E
Output: E is a Vowel.
'''


char = input("Enter character: ")

if(char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u'):
    print(char, " is a Vowel")
elif (char == 'A' or char == 'E' or char == 'I' or char == 'O' or char == 'U'):
    print(char, " is a Vowel")
else:
    print(char, " is a Consonant")
