#include<stdio.h>

void main(){
	
	double a=10.23;
	double *dptr= &a;//dereferancing
	
	printf("before increment:  ");
	printf("%p\n", dptr);
	
	
	dptr = dptr + 1;
//	dptr = dptr + 1;
//	     = dptr + 1*sizeof(DTP)
//	     = dptr + 1*8
	
	printf("After increment by 1:  ");
	printf("%p\n", dptr);
	
	
	dptr = dptr + 4;
//           =dptr + 4*sizeof(DTP) 
//	     =dptr + 4*8

	printf("After increment by 4:  ");
	printf("%p\n", dptr);


	dptr = dptr + 0;
//	     = dptr + 0*sizeof(DTP)
//	     = dptr + 0
	printf("After increment by 0:  ");
	printf("%p\n", dptr);

}
