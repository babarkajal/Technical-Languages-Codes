string1 = input('Enter first string: ')
string2 = input('Enter second string: ')

if string1 == string2:
    print('Two strings are same')
else:
    if len(string1) != len(string2):
        print("Length of the string is not  same")
    else:
        for i in range(len(string1)):
            if string1[i]!= string2[i]:
                print('Diffenence is ',ord(string1[i]) - ord(string2[i]))
                break





