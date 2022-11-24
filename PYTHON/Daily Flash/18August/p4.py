'''
you have been given a dictionary of players with their name as key and their team as a value
sort the players in the list of their respective teams
Input
    auction = {"Watson": "CSK","Raina":'CSK','Dhoni':'CSK', ' Rohit':'MI','Malinga':'MI','Pandya':'MI' }
    output
        CSK = ['Watson','Raina','Dhoni']
        MI = ['Rohit','Pandya','Malinga']
'''

auction = {"Watson": "CSK","Raina":'CSK','Dhoni':'CSK', ' Rohit':'MI','Malinga':'MI','Pandya':'MI' }
print("given list")
print(auction)

#first find out how many teams are there make the list of it
teams = []
for value in auction.values():
    if value not in teams:
            teams.append(value)

#first create dictionary to store the key as team name then value as playes list
seperatedTeams = dict()
for i in teams:
    seperatedTeams[i] = list()

#print(seperatedTeams)

#get player name and team name from original list
for key,value in auction.items():
        seperatedTeams[value].append(key)       #add it to the seperatedTeams

print("seperated Teams are")
for team in seperatedTeams:
    print(team,":",seperatedTeams[team])
