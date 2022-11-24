'''
Program 1: Write a Program that prints the Disarium Number limiting between
bounds provided by user.
Input:
Lower Bound: 1
Upper Bound: 100
Output: Series of Disarium Number ranging in 1 to 100 is = 1 2 3 4 5 6 7 8 9 89
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



lower_bound = int(input("Enter lower bound for series of disarium num: "))
upper_bound = int(input("Enter upper bound for series of disarium num: "))

for i in range(lower_bound, upper_bound+1):
    if disarium(i):
        print(i,"  ",end="")

print()

