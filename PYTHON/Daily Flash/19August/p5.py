'''
given two dictionaries
actor = {'hemsworth':"Australian",'Jackman':"Australian",'Holland':'british','Hiddleston','british','Cumberbatch':'british','Evans':'American','RDJ','American'}
marvel ={'Zoe','F','hemsworth':'M','Evans':'M','Holland':'M', 'Paltrow':'F', 'Jackman':'M', 'Hiddleston': 'M','Cumberbatch':'M'}
create a set of actors who are male and non American
'''
actor ={'hemsworth':"Australian",'Jackman':"Australian",'Holland':'british','Hiddleston':'british','Cumberbatch':'british','Evans':'American','RDJ':'American'}

marvel ={'Zoe':'F','hemsworth':'M','Evans':'M','Holland':'M', 'Paltrow':'F', 'Jackman':'M', 'Hiddleston': 'M','Cumberbatch':'M','RDJ':'M'}

finalActorSet = set()
for actorName in actor:
        if marvel[actorName] == 'M' and actor[actorName] =='American':
            finalActorSet.add(actorName)

print("actors who are male and non American: ", finalActorSet)
