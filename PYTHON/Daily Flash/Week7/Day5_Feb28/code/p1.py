'''
Program 1: Write a Program that prints whether a number entered by user is
Disarium Number or not.
{Note: A number can be termed as Disarium number if the sum of every digits
raised by their position in that number is equal to that number. E.g. 135, 1 is at
position 1, 3 is at position 2 & 5 is at position 3, then 1^1 + 3^2 + 5^3 = 1 + 9 +
125 = 135, so 135 is a Disarium Number}
Input: 89
Output: 89 is a Disarium Number.
'''

#function to check disarium or not
def disarium(num):
        #take empty list 
        digit=[]

        originalNum = num

        while num:
            digit.append(num%10)
            num //=10

        #reverse the list
        digit.reverse()

        #to store sum
        positionSum =0
        exp = 1

        for i in digit:
            positionSum += i**exp
            exp +=1

        if originalNum == positionSum:
            return True
        else:
            return False
        

        
    





num = int(input("Enter num to check whether it is disarium or not: "))

if disarium(num):
    print(num,"is disarium num")
else:
    print(num,"is not disarium num")

