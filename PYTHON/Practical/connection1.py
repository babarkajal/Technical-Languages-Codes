import requests 
import 
URL = "https://www.google.com"
r = requests.get(URL) 
#print(r.content) 

soup = BeautifulSoup(r.content, 'html5lib') 
print(soup.prettify()) 

