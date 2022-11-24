'''
Program 2: Write a Program that prints the Duck Numbers between 1 to 500.
Output: The Duck Numbers are: 10 20 30 40 .....
'''

#Duck num are the num which contain at least 1 zero present in it 
#e.g. 807650 , 2011,202, but not 09756


#function to check whteher num is  duck num or not
def Duck(num):
        #for zeros presence
        count_of_zero = False

        #check presence of zero in it
        temp = i
        while temp:
            #if any occurance of zero found then break the loop
            if temp%10 == 0:
                count_of_zero +=True
                break

            temp //=10

        if count_of_zero:
            return True
        else:
            return False

#-----------------------------------------------------------------------------

print("Duck num between 1 to 500: ")
for i in range(1,501):
    if Duck(i):
        print(i,end= "\t")

print()



