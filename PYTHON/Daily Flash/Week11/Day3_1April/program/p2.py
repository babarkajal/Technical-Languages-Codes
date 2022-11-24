'''
Program 2: Write a Program that accepts a String from user then finds and
prints the word with maximum length from that string.
Input: heaven is just an illusion made by weak hearts
Output: The Word with maximum length from the entered string is: illusion
'''

string = input("Enter string: ")


maxLen = 0      #Var to  store te maxLen
maxString = ''  #var to store maximum string
temp =''        #temp var to hold string

#traverse the string
for i in string:

    #if space or tab or comma found then there is another start  of another word
    if i ==' ' or i=='\t' or i==', ':

        #if len of previous word is less than the new then override the maxString and maxLen with that new value
        if maxLen < len(temp):
            maxString = temp
            maxLen = len(temp)

        #make the temp empty to store the next word
        temp =''

    #else store the characters from string into temp
    else:
        temp = temp+i

#now the temp will hold the last word of the string. Compare it with previos holding value
if len(maxString) < len(temp):
    maxString = temp

#print the result
print("Maximum string ",maxString)

