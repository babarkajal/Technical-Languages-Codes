#include<stdio.h>

void main() {
		int a=10;
		int iptr=&a;//iptr takes the add as a data
//do not point to the actual data amd not accessible by iptr for that we need a pointer '*'
		
		printf("a= %d\n",a); //data
		printf("iptr= %p\n",iptr); //iptr = &a (add of a)
		printf("&a= %p\n",&a); // add of a

}
