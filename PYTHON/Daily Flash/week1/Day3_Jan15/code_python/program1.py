'''
Program 1: Write a Program to check whether the Character is Uppercase or
Lowercase Character.
Input: v
Output: letter v is in lowercase
'''

char = input("Enter character: ")

#print(ord(char))

if( (ord(char) >= 65 and ord(char) <=90) or (ord(char) >=97 and ord(char)<=122 ) ):
        
        if((ord(char) >= 65 and ord(char) <=90) ):
            print("Letter " , char , " is in Uppercase")
        else:
            print("Letter " , char , " is in Lowercase")

else:
            print("Letter " , char , " is not an alphabet")


