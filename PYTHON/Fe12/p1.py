

def emp(*args):
    
    print("Data:--------")
    for i in args:
        print(i)

    def run():
        salary = 0
        for i in args:
            salary +=i[3]

        return salary
    
    salary = run()
    return salary


n = int(input("Enter num of emp: "))

empList = list()
for i in range(n):
        
        lst = list()
        name = input("Enter name: ")
        id = int(input("ID: "))
        cmpName= input("Company name: ")
        salary = float(input("Salary: "))
    
        lst.append(name)    
        lst.append(id)    
        lst.append(cmpName)    
        lst.append(salary)

        empList.append(lst)

print()
sal = emp(empList[0],empList[1])
print("Total slaary: ",sal)
