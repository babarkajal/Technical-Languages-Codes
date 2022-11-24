import os	#import os module
import sys
def fun(para):
	wordDict={}
	word=para.split();	#split into words
	for x in word:
		if x in wordDict:
			wordDict[x] +=1;	#wordDct = wordDict +1  ;
		else:
			wordDict[x]=1;
	
	return wordDict


#perform operation if file is present
if os.path.exists("demo.txt"):
	f=open("demo.txt","r")		#open a file for reading 
	text = f.read()
	var=fun(text)
	
	for key,value in var.items():
		print(key + " occures " + str(value)+" times.")

else:
	print("File not found")
	sys.exit(1)

'''
-----------------------------------------Output------------------------------------------------------
system occures 1 times.
have occures 1 times.
operating occures 1 times.
unix occures 1 times.
to occures 2 times.
but occures 1 times.
simple occures 1 times.
be occures 1 times.
know occures 2 times.
you occures 2 times.
core occures 1 times.
genius occures 1 times.
till occures 1 times.
siplicuty. occures 1 times.
code occures 1 times.
the occures 5 times.
is occures 1 times.
----------------------------------------------------------------------------------------------------
'''
