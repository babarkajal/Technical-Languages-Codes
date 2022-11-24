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
		int *ptr;
		long long ll;
		

		printf("----------Size of datatypes------------\n");
	
		printf("int a= %d\n",sizeof(a));
		printf("float f= %d\n",sizeof( f));
		printf("chat c= %d\n", sizeof(c));
		printf("double d= %d\n",sizeof(d));
		printf("long l= %d\n",sizeof(l));
		printf("long ll= %d\n",sizeof(ll));
		
		

		printf("----------Size of pointer------------\n");
		printf("iptr= %ld\n",sizeof(iptr));
		printf("fprt= %ld\n",sizeof(fptr));
		printf("cptr= %ld\n",sizeof(cptr));
		printf("dptr= %ld\n",sizeof(dptr));
		printf("lptr= %ld\n",sizeof(lptr));
}
		
