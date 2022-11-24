
row = int(input("Enter number of rows: "))
var = 1

for olc in range(row):
    for ilc in range(row):
        if(ilc <= olc):
            print(var*var*var,end = " ")
            var +=1
        else:
            pass
    print()
        
