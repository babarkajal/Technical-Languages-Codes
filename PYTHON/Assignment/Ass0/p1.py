'''
1. Take a List of String as input from user and Print Vowels and Consonants
in Each String separately.
Input: shashi ,ashish, kanha ,rahul
Output: In string Shashi , Vowels: a,i consonants: shsh
In string Ashish, Vowels: a,, i consonants: shsh
In string Kanha , Vowels: a,a consonants : knh
In string Rahul , Vowels: a,u consonants :r, h, l
'''

#take one empty list
string = []
num_of_strings= int(input("Enter Number of strings: "))

print("Enter ", num_of_strings , " strings: ")

#take strings from user
for lc in range(num_of_strings):
        string.append(input())

for name in string:
    print("IN string " , name , end = " ")
    vowel = []
    consonant = []
    for char in name:

        if char=='a' or char =='i' or char == 'e' or char == 'o' or char=='u':
            vowel.append(char);
        elif char=='A' or char =='I' or char == 'E' or char == 'O' or char=='U':
            vowel.append(char);
        else:
            consonant.append(char)

    print('Vowels: ',vowel ,"\t" , 'Consonants: ' , consonant)




        
