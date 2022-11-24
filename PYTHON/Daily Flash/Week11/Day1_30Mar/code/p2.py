'''
Program 2: Write a Program that accepts a String from user and prints the count of word that string contains.
Input: heaven is just an illusion made by weak hearts
Output: Entered String Contains 9 Words.

'''

string = input("Enter input string: ")

string = list(string)
if len(string):
    count = 1
else:
    count = 0

for i in string:
    if i ==" " or i=="," or i=="\t" or i=="\n" or  i=='\0':
        count+=1

print("Entered string contain ", count , " word")
