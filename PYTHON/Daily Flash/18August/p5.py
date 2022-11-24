'''
    You have been given list of legendary developer and their work in 2 differect lists, in order,Pair work of developer and name of respective developer in a tuple and store the pairs in a frozenset ,and print the output
    Input:
        developer =['Linus Torvalds','Guido Van Rossum','James Gosling','Dennis Ritchie']
        work = ['Linux', 'Python','Java','C& Unix']
   Output
        frozenset({('Guido Van Rossum','Python'),('James Gosling','Java'),('Lins Torvalds','Linux'),('Dennis Ritchie','C & Unix')})
'''
#given tow lists
developer =['Linus Torvalds','Guido Van Rossum','James Gosling','Dennis Ritchie']
work = ['Linux', 'Python','Java','C& Unix']

#merge two lists
merged = []
for i in range(len(developer)):
    merged.append((developer[i],work[i]))
print("After merging")
print(merged)

#we have merged the developer and his work then pass that list to the frozen set

frozen = frozenset(merged)
print(frozen)
