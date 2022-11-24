'''write a program which accepts your name and surname as input and prints each character once (order can be ignored)
'''

name = input("Enter yout name: ")
surname = input("Enter your surname: ")

#make empty list
Unique =[]
print("Unique character in name: ")
for i in name:
        if i not in Unique:
            Unique.append(i)
print(Unique)


Unique = []
print("Unique character in surname: ")
for i in surname:
        if i not in Unique:
            Unique.append(i)
print(Unique)
