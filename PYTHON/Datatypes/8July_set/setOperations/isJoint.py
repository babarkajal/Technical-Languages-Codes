set1 = {1,2,3,4}
set2 = {5,6,7,8}

print(set1.isdisjoint(set2))            #true => they  are disjoint sets

set1 = {1,2,3,4}
set2 = {1,2}
print(set1.issubset(set2))          #false ==> set1 is not subset of set2

set1 = {1,2,3,4}
set2 = {1,2}
print(set1.issuperset(set2))        #true
