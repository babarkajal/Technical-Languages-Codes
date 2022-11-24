n = int(input())

even = 0
odd = 0
countOdd = 0
countEven = 0
for i in range(n+1):
    if(i%2==0):
        even +=i
        countEven+=1
    else:
        odd +=i
        countOdd+=1


avgEven = even/countEven
avgOdd = odd/countOdd

if(avgEven == avgOdd):
    print(avgEven)
else:
    if(avgEven < avgOdd):
        print(avgEven, avgOdd)
    else:
        print(avgOdd, avgEven)

if(even==odd):
    print(even)
else:
    if(even < odd):
        print(even, odd)
    else:
        print(odd, even)
