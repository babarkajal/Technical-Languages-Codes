#include<stdio.h>

void main(){
	
	char c='C';
	char *cptr= &c;//dereferancing
	
	printf("before increment:  ");
	printf("%p\n", cptr);
	
	
	cptr = cptr + 2;
//	cptr = cptr + 2;
//	     = cptr + 2*sizeof(DTP)
//	     = cptr + 1*1
	
	printf("After increment by 2:  ");
	printf("%p\n", cptr);
	
	
	cptr = cptr + 3;
//           =cptr + 3*sizeof(DTP) 
//	     =cptr + 3*1


	printf("After increment by 3:  ");
	printf("%p\n", cptr);


	cptr = cptr + 4;
//	     = cptr + 4*sizeof(DTP)
//	     = cptr + 4
	printf("After increment by 4:  ");
	printf("%p\n", cptr);

}
