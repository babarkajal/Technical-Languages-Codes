string1 = input('Enter first string: ')
string2 = input('Enter second string: ')

temp = list(string2)
for i in string1:
    if i in temp:
        temp.remove(i)
        

string2 = "".join(temp)

print('Second string after removing all repeating characters',string2)








