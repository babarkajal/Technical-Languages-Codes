#include<stdio.h>

struct arithmetic{
		int iNum1,iNum2;
};

void main(){
	struct arithmetic op={10,60};
	printf("Addititon = %d\n",op.iNum1+op.iNum2);
	printf("Substractiton = %d\n",op.iNum1-op.iNum2);
	printf("Multiplication = %d\n",op.iNum1*op.iNum2);
	printf("Division = %d\n",op.iNum1/op.iNum2);
	
}
