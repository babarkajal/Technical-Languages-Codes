'''
Program 2: Write a Program that accepts a String from user, finds & prints any
occurrence of two consecutive vowels in that string.
Input: heaven
Output: the entered string contains occurrences of two consecutive vowels as:
ea'''


#-------------------------- Vowel count fun ----------------------------
def vowel(string):
    for i in string:
        if i=='a' or i=='e' or i=='i' or i=='o' or i=='u':
            return True
        elif i=='A' or i=='E' or i=='I' or i=='O' or i=='U':
            return True
    return False
#----------------------------------------------------------------------
string = input("Enter input string : ")
count =0
print("The enterd string contains occurances of two consecutive vowel as: ")
#traverse uptothe second last letter
for i in range(len(string)-1):
    if vowel(string[i]) and vowel(string[i+1]):
            print(string[i], string[i+1],end='  ',sep ='')

print()
        

        
        

