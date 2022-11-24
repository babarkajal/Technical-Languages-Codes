//#pragma 2
#include <stdio.h>
//structure declaration 
struct Demo {
	int i;
	//char j;
	//int k;
	float f;
	double d;
	int j;
	int ptr[100];
	
};

void main() {	
       printf("%ld\n",sizeof(struct Demo));

}
