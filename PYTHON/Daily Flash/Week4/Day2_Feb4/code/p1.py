

for loop in range(1,101):
        count =1;

        for div in range(2,loop//2+1):
            if(loop % div == 0):
                count+=1;

        if(count == 1):
            print(loop, end = " ")
print()
