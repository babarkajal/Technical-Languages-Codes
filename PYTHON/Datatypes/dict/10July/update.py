#updation in list
#if we want to update in list then we can assign value to it if that key is not present in dict then
#it will create new One

pairs = {"kajal":"ganesh","akanksha": "tejas","Gade":"Rupa"}
print("dict: ", pairs)

pairs["akanksha"]="mangesh";                #updated in list
print("Show updated dict: ", pairs)

pairs['Megha'] = "devendra";                #here this key is not found in dict then it will create new one
print("Show updated dict: ", pairs)

Instagram = {'Name': '_kajal_babar_', 'post':19, 'followers': 199, "following":219, 'Online':False}
#here now we want to update in dictionary
friends={'Mutual':25,"close friends": 24}
Instagram.update(friends)
print("Show updated dict: ", Instagram)

#------------Setdefault() --------------
# this add new pair to dict.If the value is not given then it will set its value to default and once
# we added with default value then we cannot change it with the same method
Instagram.setdefault('IGTV videos')
print("added new one with default value: ",Instagram)
Instagram.setdefault('status',True)
print("\nadded new one with default value: ",Instagram)



#----------------------------- fromkeys() --------------------------
# here we can create new dict using previous dictionary
#only keys are copied from one to another if we specifies second parameter then it will consider
#it as value to all keys
newDict = dict.fromkeys(Instagram);
print("newDict",newDict)
newDict = dict.fromkeys(Instagram,{'kajal',20});
print("newDict",newDict)
