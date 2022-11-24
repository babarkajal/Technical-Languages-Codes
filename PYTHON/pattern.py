var = 1
for i in range(4):
    for j in range(i+1):
        print( ((var**3)-i),end=' ')
        var+=1
    print()
