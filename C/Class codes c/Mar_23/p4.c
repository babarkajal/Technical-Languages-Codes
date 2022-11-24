#include<stdio.h>

void main() {
		int a=10;
		float f=21.2;
		char c='a';
		double d =12.23;
		long l=345;
		
		int *iptr=&a;
		float *fptr=&f;
		char *cptr=&c;
		double *dptr=&d;
		long *lptr=&l;
		

		printf("\n----------values of varible------------\n");
		printf("a=%d\n",a);
		printf("f=%d\n",f);
		printf("c=%d\n",c);
		printf("d=%d\n",d);
		printf("l=%d\n",l);
	
		printf("\n----------Addresses in pointers------------\n");
		printf("iptr=%p\n",iptr);
		printf("fptr=%p\n",fptr);
		printf("cptr=%p\n",cptr);
		printf("dptr=%p\n",dptr);
		printf("lptr=%p\n",lptr);

		printf("\n----------Dereferncing of pointers------------\n");
		printf("*iptr=%d\n", *iptr);
		printf("*fptr=%f\n", *fptr);
		printf("*cptr=%c\n", *cptr);
		printf("*dptr=%lf\n",*dptr);
		printf("*lptr=%ld\n",*lptr);
	
}		
