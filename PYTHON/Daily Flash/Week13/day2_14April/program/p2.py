string = input("Enter input string: ")

while True:
    pos = int(input("Enter position to delete: "))
    if pos > len(string):
        print("Entered pos is greater than the length of the string")
    else:
        break

string = string[0:pos] + string[pos+1:]
print("After deletion of ",pos,"character:",string)
'''
deleted = ''
for i in range(len(string)):
        if i==pos:
            continue
        else:
            deleted += string[i] 

string=deleted
print("After deletion of ",pos,"character:",string)
'''
