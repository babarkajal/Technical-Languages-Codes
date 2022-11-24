string = input("Enter input string: ")

findStr = input("Enter the sub-string to delete: ")
index= string.find(findStr)
start = index+len(findStr)+1
string = string[0:index] + string[start:]
print("After deletion of ",findStr,"character:",string)
