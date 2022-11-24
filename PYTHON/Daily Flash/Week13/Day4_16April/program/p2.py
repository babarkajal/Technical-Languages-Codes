
string = input('Enter string: ')

def inverse(ch):
    if ord(ch) >= 65 and ord(ch) <=90:
        return ord(ch)+32
    elif ord(ch) >= 97 and ord(ch) <= 122:
        return ord(ch)-32
    return ord(ch)
    

tempStr = ''
for i in string: 
    temp = chr(inverse(i))
    tempStr += temp

string = tempStr
print('After replacement of string : ', string)

        
