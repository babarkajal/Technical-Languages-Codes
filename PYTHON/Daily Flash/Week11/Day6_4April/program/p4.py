'''
Program 4: Write a Program to Print following Pattern.
Input: Any String: HELLO
            O  
         L  O  
      L  L  O  
   E  L  L  O  
H  E  L  L  O  
   E  L  L  O  
      L  L  O  
         L  O  
            O  

'''

string = input("Enter string: ")
row= len(string)*2-1        #rows are always twice of length of string twice -1
middle = row//2
start = 1

for i in range(row):

    for j in range(middle+1):
        if i+j >= middle and i<=middle:
            print(string[j],end="  ")
        elif j>=start and i>middle:
            print(string[j],end="  ")
        else:
            print(" ",end="  ")

    print()
    if i>middle:
        start +=1
