cloud = ['AWS' , 'Azure','GCP','Firebase']
print(cloud)


#copy assignment
copyCloud = cloud
print(id(cloud))                    #same id
print(id(copyCloud))

# they both point to same location if any one object makes changes then it is reflected to all
copyCloud.pop()
print(copyCloud)
print(cloud)            #from both Firebase will be poped


# ----------- shallow copy ---------------
#copy method:- assign differet location
copyCloud = cloud.copy()
print(id(cloud))                    #differet id
print(id(copyCloud))

#changes are limited to that copy

cloud = ['AWS' , 'Azure','GCP','Firebase']
cloud.append(['Thinkspeak','CloudIOTCore'])
print(cloud)
copyCloud = []          #empty list

#copy cloud
copyCloud = cloud.copy()                # assigned to different location


# we want to add new cloud in nexted list IOT list
copyCloud[4].append('pubnub')
print(copyCloud)
print(cloud)

#here we make changes in one list but it is reflected to the main list this is the problem of shallow copy
#always use deep copy

# ----------------------- deep copy ------------------------
import copy
cloud = ['AWS' , 'Azure','GCP','Firebase']
cloud.append(['Thinkspeak','CloudIOTCore'])
copyCloud = []
print(cloud)

#deep copy
copyCloud = copy.copy(cloud)            #this makes change for donhi list use deepCopy()

print(id(cloud))
print(id(copyCloud))
copyCloud[4].append('pubnub')
print(copyCloud)
print(cloud)


cloud = ['AWS' , 'Azure','GCP','Firebase']
cloud.append(['Thinkspeak','CloudIOTCore'])
 
copyCloud=[]
copyCloud = copy.deepcopy(cloud)            #use deepCopy()

print(id(cloud))
print(id(copyCloud))
copyCloud[4].append('pubnub')
print(copyCloud)
print(cloud)
