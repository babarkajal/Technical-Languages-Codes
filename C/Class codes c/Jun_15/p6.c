//we can not campare the struct varible directly .we have to campare the individual member varibles

#include <stdio.h>

struct pad {
	char a;
	int b;
	char c;
	float d;

};

void main(){
	struct pad var1 ={'A',2,'B',2.5};
	struct pad var2 ={'A',2,'B',2.5};

	if(var1.a == var2.a && var1.b ==var2.b && var1.c==var2.c && var1.d==var2.d)
		printf("structure varibles are same\n"); 
        else
		printf("structure varibles are not same\n");
		
}
