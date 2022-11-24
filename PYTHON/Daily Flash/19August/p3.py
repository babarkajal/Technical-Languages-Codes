''' below is the list of some actors who have acted in dc comic movie or marvel comic movie or both.
print the name of actors who have acted in marvel franchisse only or dc franchise onle
Input:
  marvel = ['Robert Downey Jr','Chris hemsworth','Scarlett Johansson','Ryan Reynolds']
  dc = ['Gal Gadot','Henry Cavil','Ezra Miler','Ryan Reynolds']
  Output
   {'Chris hemsworth','Henry Cavil','Robert Downey Jr', 'Scarlett Johansson','Ezra Miler','Gal Gadot'}
'''

marvel = ['Robert Downey Jr','Chris hemsworth','Scarlett Johansson','Ryan Reynolds']
dc = ['Gal Gadot','Henry Cavil','Ezra Miler','Ryan Reynolds']

print("given lists")
print(marvel)
print(dc)

'''
convert into into the sets to find the union
'''
marvel = set(marvel)
dc= set(dc)

print("actors who have acted in marvel franchise or dc franchise")
print(marvel.union(dc))
