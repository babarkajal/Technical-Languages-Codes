'''
Program 4 : Write a Progr am to accept 10 integers from user and prin t s the
sum & average of entered numbers .
Input: 1 2 3 4 5 6 7 8 9 10
Output:
Sum of 10 entered Number is: 55
Average of 10 entered number is: 5.55
'''


sum = 0;
print("Enter 10 Integers: ")
for x in range(10):
        num = int(input("Enter num: "))
        sum +=x+1;      #add

avg = sum /10
print("The sum of number up to 10: "+str(sum))
print("The average of number up to 10: "+str(avg))
