'''
Program 3: Write a Program that computes & prints each Numbers entered by
user using do while loop until user enters a Strong Number.
Input: 10 6 22 50 301 145
Output: 10 6 22 50 301 Terminating
'''


#---------------------------------- factorial function -------------------- 
def fact(num):
    if num==0 or num==1:
        return 1
    else:
        return num*fact(num-1)
#-------------------------------------------------------------------------


#---------------------------- Strong function ----------------------------
'''         strong num is a num whise addition of factorials of the digits is equal to the original num
            e.g 145 = 1+24+125 = 145
'''
def strong(num):
    #var to store addition
    add_of_fact =0
    temp =num

    #calculate the factorial and store it in add_of_fact
    while temp: 
        rem = temp%10
        add_of_fact +=fact(rem)
        temp//=10
    
    if num == add_of_fact:
        return True
    else:
        return False
#---------------------------------------------------------------------




print("Enter integers: ")
value = []
flag = False

while True:
    num = int(input())
    if strong(num):
            flag = True
            break

    value.append(num)

print("Entered nums are:")
for i  in value:
    print(i,end= "  ")
if flag:
    print("Terminated")
print()
