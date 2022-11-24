game_fav = {'cricket': 'MSD','Football': 'messi','basketball':'brayant'}
print("game_fav",game_fav)

#access using key
'''
    we can access any value from dictinary using key.If key is not in dictinary
    then it will throw keyError
'''
print(game_fav['cricket'])
#print(game_fav['hockey'])       #keyError: 'hockey'

'''
    get():
     1. get method accept a key and returns a value associated with that key
        If key not found in dictinary then it will silently ignore it
     2. if second parameter is given to get then it will print that value if key is not found
'''
Instagram = {'Name': '_kajal_babar_', 'post':19, 'followers': 199, "following":219, 'Online':False}
print("Instagram details ",Instagram)
print(Instagram.get('post'))             #19
print(Instagram.get('close friend'))     #key is not present pn error nahi
print(Instagram.get('close friend','Key is not present'))       #it will print second para if key not found




#access keys and values
print("Only keys from Instagram ",Instagram.keys())
#access only values
print('Only values from Instagram ', Instagram.values());

#items() : return list of tuples of keys and values
print('Items() ',Instagram.items())
