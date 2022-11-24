
row = int(input("Enetr row num: "))

var =1;
for olc in range(row):
        for ilc in range(row):
            if(ilc <=olc ):
                print(var , end= " ")
                var +=1
        print()
