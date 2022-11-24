'''
Program 2: Write a Program that accepts a String from user and reverse the
string.
Input: hello
Output:
Entered String: hello
Reversed String: olleh
'''

string = input("Enter string: ")

print("String in reverse format: ")
for i in range(len(string)-1,-1,-1):
    print(string[i],end='')
print()
