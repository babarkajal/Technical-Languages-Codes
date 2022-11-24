
def fun(*args) :
    print("Fun chya aat madhe")
    
    for i in args:
        print(i)

        def run():
            for i in args:
                i.pop()
    #fun call
    run()
    return args
    











cmpn = ["Infosys", "Veritas","directi"]
emp = ["Kajal","Ganesh","akanksha"]
PI = ["talkative", "Silent ", "frined"]

print(" fun call chy agodar")

args = fun(cmpn,emp,PI)
print("\nAfter fun call")
for i in args:
    print(i)
