#import modules
from termcolor import colored
import random				#for random access
import sys				#for exit

para = '''Unix is the simple operating system but you have to be genius to understand the simplicity.
	  ''';

#split the para
wordList=para.split()

#get random word from para
Random=random.choice(wordList)
print(Random)

#conert it into list of words
letterList=list(Random)

max_try=len(Random)-1

length=len(Random)		#calculating length of random word
var='*' * length

so_far=list(var)

used=[]
#-------------------------------game--------------------------

print(colored('------------------------------: WELCOME IN HANGMAN GAME :----------------------------------','red','on_green'))         
print(colored('::::::::::::::::::::::::HII Player, you are playing an intersting Game::::::::::::::::::::::: \n','yellow','on_grey'))
print('The Random word: ' + ('').join(so_far))
#guess=input("Please,Choose a letter: ")

i=0;
while i < max_try:
	
	guess=input("\nPlease,Choose a letter: ")
	if guess in used:
		print('Already Guessed Letter:: '+str(used))
	#	guess=input('Choose a another letter:: ')
		continue
	
	for i in range(Random):
	  if guess in letterList:
		if guess in used:
			print(so_far)
		else:
			print('\nLetter matched!!!!')
			print(colored('YOU WON THE GAME!!!!','red','on_green'))
			index = letterList.index(guess)			#find the postion of letter in the word
			so_far[index] = guess				
			print((" ".join(so_far)))
			sys.exit(0)
	  else:
		print('\nFailed!!!')
		print('Try Again')
		used.append(guess)
		i +=1;
		print('Only %s try remaining' %(max_try-i))
		
	
	
if i == max_try:
	print('')
	print('You loss!!!\nAs you crossed maximum limit')
		
		




