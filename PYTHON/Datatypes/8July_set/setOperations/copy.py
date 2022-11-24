
PlayStore = {'Core3Web','Tinder','GooglePay','WhatsApp','Snapchat'}

#assignment
myStore = PlayStore
print('myStore ',myStore)

#creates problem when we add into one then it is reflected to other also
myStore.add('Instagram')
print('PlayStore',PlayStore)
print('myStore',myStore)

#using copy()
print("\nusing copy:")
myStore = set()
myStore = PlayStore.copy()
print('PlayStore',PlayStore)
print('myStore',myStore)
