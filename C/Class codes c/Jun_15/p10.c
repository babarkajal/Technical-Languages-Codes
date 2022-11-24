//array of structure

#include<stdio.h>

struct stud{
	char name[20];
	int rollNo;
	char fvrtSub[20];
	float Marks;	
};

void main(){
		struct stud s1={"kajal",1,"math",50.56};
		struct stud s2={"akanksha",2,"phy",78.78};
		struct stud s3={"pooja",3,"M3",67.89};
		struct stud s4={"poonam",4,"Eng",54.54};
	
		

		printf("Name\t RollNo\tSubject\tMarks\n");
	
		
		printf("%s\t %d\t %s\t %f\n",s1.name,s1.rollNo ,s1.fvrtSub,s1.Marks);
		printf("%s  %d\t %s\t %f\n",s2.name,s2.rollNo ,s2.fvrtSub,s2.Marks);
		printf("%s\t %d\t %s\t %f\n",s3.name,s3.rollNo ,s3.fvrtSub,s3.Marks);
		printf("%s\t %d\t %s\t %f\n",s4.name,s4.rollNo ,s4.fvrtSub,s4.Marks);
	
}
