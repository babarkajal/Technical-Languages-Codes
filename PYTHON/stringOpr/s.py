s='kajal'
print("len: ",len(s))
print(s[0])	 #print 0 index char k
print(s[2]) 	#print 2 index j

print(s[-1])	#positive means starting and negative means from end
print(s[len(s)-1]) #same as above

#slicing the characters
print("slicing operation : ")
x=s[0:1] 	#print char from 0 to the 1-1
print(x)



#concatenation
print("Concatanation : ")
y='Babar'
print(s+y)

#immutability
#we can not change the one letter of word
#s[0]='z' #error

print("extend: ")
s=s[:4]+'L'
print(s)


#list
print("\nList conversion")
s='KAJAL'
l=list(s)
print(l)

print("change in list replace K by k: ")
l[0]='k'
print(l)

#join the string
print("Then join the string")
print(" ".join(l))


#extend the string
B=bytearray('kajal')
B.extend('Babar')
print(B)


#replace the word
B='kajal'
print('find status: ')
print(B.find('jal'))#returns offset otherwise -1
B.replace('jal','jol')
print(B)


