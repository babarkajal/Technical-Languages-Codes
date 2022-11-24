//Array of structure

#include <stdio.h>

struct Student{
	int s1,s2,s3,sum;
}stud[3];

void main(){
	int i;
	for(i=0;i<3;i++){
		printf("Enter the marks of  3 sub for student %d: ",i);
		scanf("%d%d%d",&stud[i].s1,&stud[i].s2,&stud[i].s3);
		stud[i].sum += stud[i].s1 + stud[i].s2 + stud[i].s3;
	}
	
	printf("stu\tmarks\n");
	for(i=0;i<3;i++){
		printf("stud[%d]  \t  %d\n",i,stud[i].sum);
	}
}
	
	
	
