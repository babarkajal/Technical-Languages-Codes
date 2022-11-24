

age = int( input("Enter age: ")) 

#test case
if(age < 20  or age > 60):
        print("ERROR!!!")
        exit(0)

sex = input("Enter sex(F/M): ")

status = input("Enter marital (Y/N): ")


if(sex == 'F' or sex =='f'):
	print("You can work only in urban areas");

elif(sex == 'M' and age >= 20 and age <= 40):
	 print("You can work in anywhere\n");

elif(sex == 'M' and age > 40 and age <= 60):
	print("You can work only in urban areas\n");

else:
	print("ERROR!!!\n");

