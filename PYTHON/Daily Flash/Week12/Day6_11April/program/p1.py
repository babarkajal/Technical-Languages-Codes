

#take string from user
string = input("Enter input string: ")
start = int(input("Enter starting index to copy: "))
while True:
    end = int(input("Enter ending index to copy(>start): "))
    if end <= start:
        print('Enter endong index greater than starting index')
    else:
        break

copyStr = string [start:end+1]
print("Copied string : ",copyStr)
