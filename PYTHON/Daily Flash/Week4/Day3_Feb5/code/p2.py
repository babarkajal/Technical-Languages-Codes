#binary to octal conversion
'''
step1: take one binary num from user
step2: group them in three and find decimal of it 
step3: put that decimal in array and repeat from step 2 till end of digits in binary num
step4: print array in reverse order
'''

import array

#tstep1: ake binary num from user
binNo = int (input("Enter binary no: "))

#break the num in group of three and find decimal
exp = 0 

#create array
arrayOctal = array.array('i')

lc= 0
count = 0
decimalNo  =0  

#step 2:gruop of three
while binNo != 0:
        
        rem = binNo%10
        decimalNo = decimalNo + rem * pow(2,exp)  
        exp += 1
        count += 1
        
        #step3 : put the decimal of gruop of three bits in array
        if count==3:
            arrayOctal.append(decimalNo)
            decimalNo = 0
            exp = 0
            count = 0
            lc+=1
        
        binNo //= 10
#end of while

#step 4: print array in reverse order
print("Octal representation: ", end= "")
arrayOctal.reverse()
for i in arrayOctal:
    print(i , end= "")
print()
            
