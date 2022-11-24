
#include<stdio.h>
struct Xyz{
};
void main(){
	struct Xyz x;
	char *cptr2;	
	float *fptr;
	int *iptr;
	double *dptr;
	printf("%f\n",*fptr);
	printf("%d\n",*iptr);
	printf("%f\n",*dptr);
	printf("%c\n",*cptr2);
}
