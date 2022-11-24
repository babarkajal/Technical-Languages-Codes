#----------------------------- count() --------------------------------------
'''count(...)
    L.count(value) -> integer -- return number of occurrences of value
'''
#on list
print("on list: ")
numList = [1,2,3,4,5,6,4,2,4]
print("Count of 4 in list ", numList.count(4))          #3
print("Count of 100 which is not present ", numList.count(100))         #0


print("on tuple: ")
numTuple = (1,2,3,4,5,6,4,2,4)
print("Count of 4 in list ", numTuple.count(4))          #3
print("Count of 100 which is not present ", numTuple.count(100))            #0

'''Set has no method count. set contain occurrences of each element as one
print("on set: ")
numSet = {1,2,3,4,5,6,4,2,4}
print("Count of 4 in list ", numSet.count(4))          #3
print("Count of 100 which is not present ", numSet.count(100))
'''

'''AttributeError: 'dict' object has no attribute 'count'

print("on dict: ")
numDict = {1:'one',2:'two',3:'three',4:'four',1:'one'}
print("Count of 1:'one' in list ", numDict.count({1:'one'}))                          #3
print("Count of 100 which is not present ", numList.count(100))
'''
