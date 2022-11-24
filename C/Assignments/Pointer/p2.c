#include<stdio.h>

void main(){
	
	int a=10;
	int *iptr= &a;//dereferancing
	
	printf("before increment:  ");
	printf("%p\n", iptr);
	iptr=iptr+1;
//	iptr = iptr + 2;
//	     =  iptr + 2*sizeof(DTP)
	
	printf("After increment by 2:  ");
	printf("%p\n", iptr);
	
	iptr = iptr + 3;
//           =iptr + 3*sizeof(DTP)

	printf("After increment by 3:  ");
	printf("%p\n", iptr);

	iptr = iptr + 1;
//	     =iptr + 1*sizeof(DTP)
	printf("After increment by 1:  ");
	printf("%p\n", iptr);

}
