'''
Program 2: Write a Program that accepts a String from user then accepts a character to find occurrence of it, in that string.
Input:
Enter String: heaven is just an illusion made by weak hearts
Enter Character to find occurrence of: i
Output: The occurrence of I in the entered sting is 3
'''

#--------------------------- Find the occurance of char in string -----------
def findOcc(string, char):
    count = 0
    for i in string:

        # if the given  char found then inc the counter
        if i==char:
            count +=1
    return count
#----------------------------------------------------------------------------
string = input('Enter input string: ')
char = input('Enter character to find its occurance in the given string: ')
print('The occurance of',char,'in the entered string is', findOcc(string,char))


