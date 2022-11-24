'''
Program 2: Write a Program that accepts a number from user and prints the
values at following places from that number. {Value at one’s place, ten’s place,
hundreds’ place & thousand’s place if the values exists}
Input: 123
Output:
Value at ones place: 3
Value at ten’s place: 2
Value at hundreds’’ place: 1
'''

#num: type(int) - to take the integer value from user
#
num = int(input("Enter num: "))

#list to take places
place = ['One', 'Ten', 'Hundreds', 'Thousand','Lakh', 'crore']
#for indexing
lc=0
while num and lc < len(place):
    print('Value  at ', place[lc], ':', num%10)
    num //=10       #decrese the num by one place
    lc +=1          #increment the lc


