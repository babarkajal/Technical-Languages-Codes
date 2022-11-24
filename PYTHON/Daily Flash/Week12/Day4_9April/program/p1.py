'''
Program 2: Write a Program that accepts a String from user, finds & prints if
that entered sting is a palindrome string or not.
Input: Enter String: madam
Output: the entered string madam is a palindrome String.
'''


string = input('Enter input string: ')

reverseStr ="".join(reversed(string))

if string == reverseStr:
    print("The entered string",string,'is a palindrome string')
else:
    print("The entered string",string,'is not a palindrome string')
     
