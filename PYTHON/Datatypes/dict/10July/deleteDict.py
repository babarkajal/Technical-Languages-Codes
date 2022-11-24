Instagram = {'Name': '_kajal_babar_', 'post':19, 'followers': 199, "following":219, 'Online':False}
print("Instagram details ",Instagram)

#print(Instagram.pop())				#error pop expects the argument as a key to delete
print(Instagram.pop('post'))			#delete post key value pair
print("Instagram details after pop operation: ",Instagram)

#when key not found in dict it does nothing .If we provide second argument to pop method it will dispaly that
print("Popping unavailable data: ", Instagram.pop('Close friends','Key not present'))

#------------------------- popitem() method -------------------------
''' this method delete the last element from the list
    does not take any parameter
    If we tried to pop item form empty dict it will throw keyError: dict is empy
'''

print("popp last elements: ",Instagram.popitem())

#------------------------------ clear method---------------------------
''' clears all the dictionary but does not delete the object ans return the none'''
print(Instagram.clear())
print("is present  after clear ",Instagram)
# ----------------------------- delete method ------------------------
# delete all the dict
del Instagram
#print("is present  after del ",Instagram)
