'''
Program 4: Write a Program to Print following Pattern
Enter string: HOME
H
H  O
H  O  M
H  O  M  E
H  O  M
H  O
H

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
