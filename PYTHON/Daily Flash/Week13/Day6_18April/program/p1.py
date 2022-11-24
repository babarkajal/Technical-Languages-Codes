string1 = input('Enter first string: ')
string2 = input('Enter second string: ')


len1 = len(string1)
len2 = len(string2)

while True:
    n = int(input("How many characters from the string to compare: "))
    if n > len1 or n > len2:
        print('Num of letteres should be less or equal than the both strings')
    else:
        break



#check if both strings are equl or not
if string1[0:n] == string2[0:n]:
    print('both strings are equal upto',n,'characters')

#if not equal then find the difference
else:
    for i in range(0, n+1):
        if string1[i]!= string2[i]:
            print('difference between first dissimilar characters: ', ord(string1[i])-ord(string2[i]))
            break









