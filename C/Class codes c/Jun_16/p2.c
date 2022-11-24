//structure within structure

#include<stdio.h>

struct doctor{
	char name[30];
	int rank;
	char degree[30];
	int salary;
};

struct Hospital{
	struct doctor D;
	char location[30];
};


void main(){
	struct Hospital H1= { {"Kajal",1,"MBBS",500000},"Pune"};
	struct Hospital H2= { {"ABC",4,"MBBS",10000},"Narhe"};


	printf("\n---List of Doctors---\n");
	printf("Name\tDegree\tRank\tsalary\tlocation");

	printf("\n%s\t%s\t %d \t %d\t %s\n",H1.D.name, H1.D.degree, H1.D.rank, H1.D.salary, H1.location);
	printf("\n%s\t%s\t %d \t %d\t %s\n",H2.D.name, H2.D.degree, H2.D.rank, H2.D.salary, H2.location);
}
