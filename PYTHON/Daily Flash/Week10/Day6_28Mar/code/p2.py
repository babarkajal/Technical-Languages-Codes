'''
Program 2: Write a Program that accepts a String from user and replaces every
vowel from that String with largest alphabet from that string.
Input: heaven
Output: Replaced String: hvvvvn
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


string= input('Enter input string: ')

ch = max(string)

for i in string: 
    
    if isVowel(i):
        string = string.replace(i,ch)

print('Replaced string : ',string)


