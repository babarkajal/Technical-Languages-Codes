'''
Program 3: Write a Program that computes & prints each Numbers entered by
user using do while loop until user enters an Armstrong Number.
Input: 10 6 22 50 301 153
Output: 10 6 22 50 301 Terminating
'''

'''------------------------------Armstrong num -------------------------
Armstrong num: It is a num whose  addition cube of digits is same as that of num 
'''
def armstrong(num):
    add_cube =0
    oriNo = num
    while num:
        rem = num%10
        add_cube =add_cube + (rem**3)
        num //=10
    if oriNo == add_cube:
        return True

    else:
        return False
#-------------------------------------------------------------------------



print("Enter integers: ")

value = []
flag = False

while True:
    num = int(input())
    if armstrong(num):
            flag = True
            break

    value.append(num)

print("Entered nums are:")
for i  in value:
    print(i,end= "  ")
if flag:
    print("Terminated")
print()
