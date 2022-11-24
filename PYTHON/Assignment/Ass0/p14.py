row = int (input("Enter row: "))
var = 0

for outer in range(row):

        char = 65 + outer
        for inner in range(row):
            if outer+inner >= row-1:
                print(chr(char) , end = " ")
                char -= 1
            else:
                print(" ", end=" ")
    
        char +=1
        for inner in range(var):
            char +=1
            print(chr(char), end = " ")
        var +=1;
        print()
