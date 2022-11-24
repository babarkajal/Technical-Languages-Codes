//campare thee structure varible =invalid operation 

#include <stdio.h>

struct pad {
	char a;
	int b;
	char c;
	float d;
	double f;
};

void main(){
	struct pad var1 ={'A',2,'B',2.5};
	struct pad var2 ={'A',2,'B',2.5};

	if(var1 == var2)//error
		printf("structure varibles are same\n"); 
        else
		printf("structure varibles are not same\n");
		
}
