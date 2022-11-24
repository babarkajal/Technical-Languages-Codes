# remove method for set

playStore = {'Fifa','pubg', 'TempleRun','SubwaySurf','ClasOfClans','LudoKing'}
print(playStore)

playStore.remove("TempleRun")               #it will remove TempleRun from set
print(playStore)

#playStore.remove("PockemonGo")                #keyError: 'pockemanGo'
#print(playStore)


# discard():-  if we try to remove game which is not present from set then it will no throw any error
playStore.discard("ClasOfClans")
print(playStore)

playStore = {'Fifa','pubg', 'TempleRun','SubwaySurf','ClasOfClans','LudoKing'}
print(playStore)
print(playStore)
print(playStore.pop())


#clear() method
#       is used to clear all the list

playStore.clear()
print(playStore)                                #set()
