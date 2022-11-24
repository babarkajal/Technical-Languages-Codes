string = input('Enter string: ')

count =0
i=''
for i in string: 
    if i==' 'or i ==', ' or i=='.' :
        count+=1

if i!= '.' and i!=',' and i!='':
    count+=1
print('Num of words the entered string contain',count)

