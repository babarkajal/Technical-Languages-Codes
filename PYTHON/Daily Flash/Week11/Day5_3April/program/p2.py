'''
Program 2: Write a Program that accepts a String from user then finds and prints the occurrence of vowels in that string
Input: heaven is just an illusion made by weak hearts
Output: The Vowels occurred for 16 times in that string
'''
#-------------------------- Vowel count fun ----------------------------
def vowelCount(string):
    count = 0
    for i in string:
        if i=='a' or i=='e' or i=='i' or i=='o' or i=='u':
            count+=1
        elif i=='A' or i=='E' or i=='I' or i=='O' or i=='U':
            count +=1
    return count
        
#-----------------------------------------------------------------------

string = input('Enter input string: ')
print('The vowel occurred for',vowelCount(string),'times in that string')
