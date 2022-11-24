t = tuple([10,20])

for i in range(4):
    t = t.__add__( tuple([(input("Enter value: "))]))

print(t)
