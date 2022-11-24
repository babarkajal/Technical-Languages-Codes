'''
Program 2: Write a Program that accepts a String from user then finds and
prints the occurrence of each vowels in that string
Input: heaven is just an illusion made by weak hearts
Output: The occurrence of vowels in the entered sting is as below
a = 5, e = 5, i = 3, o = 1, u = 2
'''

#-------------------------- Vowel count fun ----------------------------
def vowelCount(string,countDict):
    count = 0
    for i in string:
        if i=='a' or i=='A':
            countDict['a'] = countDict['a'] +1
        elif i=='e' or i=='E':
            countDict['e'] = countDict['e'] +1
        elif i=='i' or i=='I':
            countDict['i'] = countDict['i'] +1
        elif i=='o' or i=='O':
            countDict['o'] = countDict['o'] +1
        elif i=='u'or i=='U':
            countDict['u'] = countDict['u'] +1

    
#-----------------------------------------------------------------------


#take a dict to store the count of 
countVowel = {'a':0, 'e':0, 'i':0, 'o':0, 'u':0}

string = input('Enter input string: ')


#call the function to coun the vowels
vowelCount(string,countVowel)


print('The Occurance of vowels in the entered string is as follows')
for key,value in countVowel.items():
     print(key ,'=', value)




