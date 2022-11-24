#include<stdio.h>

struct XYZ{
	int a;
	char c;
	float f;
	double d;
};

main(){
	struct XYZ var;
	printf("size of struct = %d\n",sizeof(var));
	printf("size of struct = %d\n",sizeof(struct XYZ));
}
