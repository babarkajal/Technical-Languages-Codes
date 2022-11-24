'''
Program 2: Write a Program that accepts a String from user then finds and
prints the word with minimum length from that string.
(Note: In the case of ambiguous behaviour, first minimum word is prioritized)
Input: heaven is just an illusion made by weak hearts
Output: The Word with minimum length from the entered string is: is
'''

string = input("Enter string: ")
minLen = 1000      #Var to  store  minLen. Initilize it to the highest length of the string. e.g 1000
minString = ''  #var to store minimum string
temp =''        #temp var to hold string

#traverse the string
for i in string:

    #if space or tab or comma found then there is another start  of another word
    if i ==' ' or i=='\t' or i==', ':

        #if len of previous word is greater than the new then override the minString and minLen with that new value
        if minLen > len(temp):
            minString = temp
            minLen = len(temp)

        #make the temp empty to store the next word
        temp =''

    #else store the characters from string into temp
    else:
        temp = temp+i

#now the temp will hold the last word of the string. Compare it with previos holding value
if len(minString) > len(temp):
    minString = temp

#print the result
print("Minimum string ",minString)
