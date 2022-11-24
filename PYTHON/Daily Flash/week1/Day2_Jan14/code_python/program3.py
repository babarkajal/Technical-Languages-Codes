'''
Program 3: Write a Program to Find whether the character is an alphabet, a
digit or a special character
Input: *
Output: * is a Special Character.
'''

char = input("Enter character: ")
#print(int(char))

#if(char >= str(97)):
#   print("hello")


if( (char >= 'a' and char <= 'z') or (char >='A' and char <='Z' ) ):
        print(char ," is not a Special character")
elif (char >= '0' and char <= '9'):
        print(char ," is not a Special character")
else:
        print(char ," is a Special character")
