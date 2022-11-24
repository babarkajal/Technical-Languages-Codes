'''
Program 2: Write a Program to Convert entered Hexadecimal Number to Octal
Number.
Input: Hexadecimal Number: 5f
Output: Octal Number: 137
'''

#function to convert hexToDec
def hexToDec(hexNum):
    exp = decimal = 0
    for lc in range(len(hexNum)-1 , -1 ,-1):

        if hexNum[lc]>='A' and hexNum[lc]<='F':
            temp = ord(hexNum[lc]) - 55
        else:
            temp = int(hexNum[lc])

        #print(temp)

        decimal = decimal + temp* pow(16,exp)
        exp +=1
    return decimal

hexNum = input("Enter hexadecimal num: ")

print("Octal= ", oct(hexToDec(hexNum)))
