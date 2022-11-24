'''
Program 5: Write a Program that takes a number as input from user and prints
Quotient of division of each digit from that number with the number itself.
Input: 124
Output:
The Quotients of Divisions are;
124/1 = 124
124/ 2 = 62
124/4 = 31
'''
original  = 0
def fun(num):
    
    if num:
        print(original , "/" , num%10 ,"=", original//(num%10))
        fun(num//10)


num = int(input("Enter num: "))
original = num

print("The Quotients of divisions are: ")
fun(num)
