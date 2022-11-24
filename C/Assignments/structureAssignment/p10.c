#include<stdio.h>
struct stud{
	int rollNo;
	char name[30];
	float per;
};


struct college{
	struct stud s[10];
	char clgName[30];
	char loc[20];
	
};

struct college getdata(int n){
	
	struct college c;
	for(int i=0;i<n ;i++){
		printf("\nEnter details of student %d\n",i+1);	
		printf("Enter student name: ");
		scanf("%s",c.s[i].name);
		
		printf("Enter Roll no: ");
		scanf("%d",&c.s[i].rollNo);
		
		printf("Enter percentage: ");
		scanf("%f",&c.s[i].per);
	}
	printf("\nEnter the college details\n");
	printf("Enter college name: ");
	scanf("%s",c.clgName);
	printf("Enter location: ");
	scanf("%s",c.loc);

return c;//return structure varible
}

void print(struct college c,int n){	
	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("COLLEGE NAME : %s\n",c.clgName);
	printf("College Location : %s\n",c.loc);
	printf("\t------:Student Details:------\n");
	printf("Name\t\tRoll NO\t\tPercentage\n");
	
	for(int i=0;i<n ;i++){
			printf("%s\t\t%d\t\t%.2f%\n",c.s[i].name, c.s[i].rollNo, c.s[i].per);
	}
}


void search(struct college c,int n){
	
	int x,int flag=0;
	printf("Enter the roll No to be searched: ");
	scanf("%d",&x);
	for(int i=0 ;i<n;i++){
		if(c.s[i].rollNo == x){
				printf("Name: %s\nRoll no: %d\nPercentage: %.2f%\n",c.s[i].name, c.s[i].rollNo, c.s[i].per);
				flag=1;	
		}
	}

}
		
	
	


void main(){
	int n;
	printf("Enter number of student: ");
	scanf("%d",&n);
	
	struct college c;
	c=getdata(n);
	print(c,n);
	search(c,n);
}

	
