'''
Program 3: Write a Program that computes & prints Factorials of numbers
entered by user using do while loop until user enters a negative number.
'''

#------------------- Factorial function --------------------------------
def fact(num):
    if num == 0 or num == 1:
        return 1
    else:
        return num * fact(num-1)
#----------------------------------------------------------------------


print("Enter integers to calculate the factorials")
#take empty list to store the factorial of entered num
fact_list = []

while True:
    num = int(input())
    if(num < 0):
        break
    
    fact_list.append(fact(num))

print("factorial of entered num are:")
for i  in fact_list:
    print(i,end= "  ")
print()
