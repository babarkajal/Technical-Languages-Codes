'''
    There is a traditional function at your home ,your dad has given you the lists of the invited guests, but due to some mistake some guests are mentioned twice in the list.Remove duplicate entries from the list and printf the output as tuple.(orde can be neglected)
    Input:
          guests = ["Aunt(Paternal)", "Grandpa" , "GrandMa","Uncle","Aunt(Paternal)","Uncle(Maternal)", "Uncle(Maternal)"]
    output
        guests = ["Aunt(Paternal)","Uncle","Grandpa" , "GrandMa", "Uncle(Maternal)"]
'''

guests = ["Aunt(Paternal)", "Grandpa" , "GrandMa","Uncle","Aunt(Paternal)","Uncle(Maternal)", "Uncle(Maternal)"]

#take a one empty list
updated =  []
#first find that element is in updated list or not
#if yes then dont add it and is not then add it
print("List of Guests: \n", guests)
for element in guests:
        if element not in updated:
               updated.append(element);

print("Updated list of Guests \n",updated)


#using some methods
for element in guests:
    #if any name is repeated then find its count
    #if it is > 1 then Remove it
    if guests.count(element)>1:
        #find the index
        guests.remove(element)

print("Updated list using some method")
print(guests)
