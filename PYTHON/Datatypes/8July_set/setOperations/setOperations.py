#make two list and perfomr operations on them i.e union , intersection, difference

AppStore = {"HomeCourt",'Things3','WhatsApp','TweetBot','GooglePay'}
PlayStore = {'Core3Web','CorpTalks','GooglePay','WhatsApp','Airdroid'}
print("Appstore ", AppStore)
print("Playstore ", PlayStore)

#union
print('Union operations: ')
print(AppStore | PlayStore)
print(AppStore.union(PlayStore))

#intersection
print('\nInertsection operations: ')
print(AppStore & PlayStore)
print(AppStore.intersection(PlayStore))


#difference method
print('\nDifference')
print('AppStore - PlayStore ',AppStore-PlayStore)
print('PlayStore - AppStore ',PlayStore-AppStore)


#symetric difference

print("\nSymetric difference:")
print(AppStore ^  PlayStore)
print(AppStore.symmetric_difference(PlayStore))





#difference_update() and symmetric_difference_update()

print("\ndifferece_update")
AppStore.difference_update(PlayStore)
print(AppStore)

AppStore = {"HomeCourt",'Things3','WhatsApp','TweetBot','GooglePay'}
print("\nsymmestric_differece_update")
AppStore.symmetric_difference_update(PlayStore)
print(AppStore)
