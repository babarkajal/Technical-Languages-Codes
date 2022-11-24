t = int(input())
cube = []

for i in range(t):
    cube.append(int(input()))

for i in cube:
    if(i==0 or i==1):
        scrapedVolume = i*i*i
        print(scrapedVolume)
    else:
        vol = i*i*i
        scrapedVolume = vol - ((i-2)**2 * (i-2))
        print(scrapedVolume)
