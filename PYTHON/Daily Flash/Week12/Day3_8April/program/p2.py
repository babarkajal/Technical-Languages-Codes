'''
Program 2: Write a Program that accepts a String from user, finds & prints if that consists of a substring asked by user.
Input: Enter String: yellow
Enter Substring to find low
Output: the entered string consists low as substring
'''

string= input('Enter input string: ')
subString = input('Enter substring to find: ')

if string.find(subString) != -1:
    print("The entered string consist",subString ,'as substring')
else:
    print('Substring not found!!!')
