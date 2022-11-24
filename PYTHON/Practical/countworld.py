def fun(para):
	wordDict={}
	word=para.split();	#split into words
	for x in word:
		if x in wordDict:
			wordDict[x] +=1;	#wordDct = wordDict +1  ;
		else:
			wordDict[x]=1;
	return wordDict;


var= fun('''kajal babar
	pratik deshmukh
	ganesh manajre
	kajal ganesh manajre''')
	

for key,value in var.items():
	print(key + " occures " + str(value)+" times.")
