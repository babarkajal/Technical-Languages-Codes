//Void pointer can store address of any varible of different datatype
//but cannnot be dereferced

#include<stdio.h>

void main(){
	 int a=20;
	 int *iptr = &a;
	 void *vptr = &a;
	printf("*iptr= %d\n",*iptr);
	printf("size of(vptr)= %d\n",sizeof(vptr));//8
	printf("size of(*vptr)= %d\n",sizeof(*vptr));//1
}

