'''
3.Write a Program to take Dictionary as input from user , if one’s key is
value of other pair , remove entry of that key from dictionary.
Input:
Dictionary: {“brand” : apple, “1”: rahul, “samsung”:brand}
Output: {“1”:rahul, “samsung”:brand}
'''

sampleDict = {}

ele = int(input("Enter elements in dictionary: "))

for lc in range(ele):
    sampleDict[input("Enter key: ")] = input("Enter value: ")

# take two empty list for storing key values
keys = []
value = []

for lc in sampleDict:
    keys.append(lc)
    value.append(sampleDict[lc])

#print(keys)
#print(value)


print("Input dictionary: ")
print(sampleDict)

#Check if key or one pair is value of other pair
for key in keys:
    for val in value: 
        if( key==val ):
            sampleDict.pop(key)

print("Output dictionary: ")
print(sampleDict)
