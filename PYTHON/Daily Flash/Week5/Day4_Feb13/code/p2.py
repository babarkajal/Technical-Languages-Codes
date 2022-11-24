'''
Program 2: Write a Program to Convert entered Hexadecimal Number to
Decimal Number.
Input: Decimal Number: 25
Output: Decimal Number: 37
'''

def hexToDec(hexNum):
    exp = decimal = 0
    for lc in range(len(hexNum)-1 , -1 ,-1):
        
        if hexNum[lc]>='A' and hexNum[lc]<='D':
            temp = ord(hexNum[lc]) - 55
        else:
            temp = int(hexNum[lc])

        #print(temp)

        decimal = decimal + temp* pow(16,exp)
        exp +=1
    return decimal 



hexNum = input("Enter hexadecimal num: ")
print("Equivalent Decimla num : " , hexToDec(hexNum) )
