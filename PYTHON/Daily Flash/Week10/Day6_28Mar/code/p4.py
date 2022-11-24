'''
Enter string: Core2Web
C  
C  o  
C  o  r  
C  o  r  e  
C  o  r  e  2  
C  o  r  e  2  W  
C  o  r  e  2  W  e  
C  o  r  e  2  W  e  b  
C  o  r  e  2  W  e  
C  o  r  e  2  W  
C  o  r  e  2  
C  o  r  e  
C  o  r  
C  o  
C  
'''
string  = input("Enter string: ")

char=list(string);

middle = len(string)-1
end= 1

for i in range(middle*2+1):

    for j in range(end):
        print(char[j], end= '  ')

    if i < middle:
            end+=1
    else:
        end -=1

    print()
