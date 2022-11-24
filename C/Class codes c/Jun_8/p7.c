#include<stdio.h>

struct XYZ{
	char ch;
	double db;
	int a;
	char c;
	double d;
	float f;
};

main(){
	struct XYZ var;
	printf("size of struct = %d\n",sizeof(var));
	printf("size of struct = %d\n",sizeof(struct XYZ));
}
