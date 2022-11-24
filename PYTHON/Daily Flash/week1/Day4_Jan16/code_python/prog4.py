
row = int(input("Enter num or rows: "))
count = 1 
for x in range(row):
        for y in range(row):
            if count < 10:
                print(count ,end = "  ")
            else:
                print(count ,end = " ")
            
            count +=1
        #end for
        print()
#end outer for

