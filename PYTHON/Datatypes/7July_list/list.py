chineseProduct = ['UCBrowser','Tiktok','Shareit']
print(chineseProduct)

#append method: which add the element at the append
chineseProduct.append("PUBG")
print(chineseProduct)

#we can add list inside list : nested list
Batsman = ['virat kohli','rohit','Dhoni']
Bowler =['Bhuvi','Bumrah','Chanal']
team_India = [Batsman ,Bowler]
print(team_India)

#empty list
TeamIndia = []
TeamIndia.append(Batsman)
TeamIndia.append(Bowler)
print(TeamIndia)                #[[],[]]

#extend method:- extend method will add each element to the list
TeamIndia = []
TeamIndia.extend(Batsman)
TeamIndia.extend(Bowler)
print(TeamIndia)                        #[,,]

pair =[]
pair1 = (1,2)
pair2 = (2,3)
pair.extend(pair1)                   #[]
pair.extend(pair2)                   #[]


Languages = []
prog = ('c','c++','java','Python')
AvdProg = {'Android','Flutter'}
Languages.extend(prog)              #[]
Languages.extend(AvdProg)           #[]


#adding elements
#insert(pos,ele): add ele at position pos
Final2011 = ['Sachin','Sehwag','Gautam','Virat kohli','Yuvi']
print(Final2011)
Final2011.insert(4,'Dhoni')
print(Final2011)
Final2011.insert(8,'Kedar')                 #here 8 index is not present pn to at the end la add hoto
print(Final2011)
Final2011.insert(-2,'kajal')
print(Final2011)

# ------------------------------------------ deletion methods
#remove method: will remove the given element from list
listApp = ['Facebook','Instagram','TikTok']
print(listApp)

#listApp.remove(2)              ValueError:list.remove(x) not in List
listApp.remove('TikTok')
print(listApp)
#listApp.remove('Shareit')       ValueError: not in list


#pop() methods
#1. pop():  will pop the last element
listApp = ['Facebook','Instagram','TikTok','PUBG']          #pop PUBG
listApp.pop()
#2. pop(x):  will pop the element located at index x
listApp.pop(2)
print(listApp)

##clear() : clear all the list
listApp.clear()

## del listName
del listApp
#print(listApp)                                               #NameError: listApp is not defined













# --------------- sorting -------------------------------

folderContent = ['document.txt','movies.txt','javaProgram.txt','cppDoc.txt']
print(folderContent)

folderContent.sort()                                            #inplace sorting
print(folderContent)

folderContent.sort(key = len)
print(folderContent)

#reverse sort
folderContent.sort(reverse = True)
print(folderContent)

#reveser on the lenght of the elements
folderContent.sort(key = len,reverse = True)
