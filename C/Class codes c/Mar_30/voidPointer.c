//Void pointer can store address of any varible of different datatype
//but cannnot be dereferced

#include<stdio.h>

void main(){
	 int a=20;
	 int *iptr = &a;
	 void *vptr = &a;
	printf("*iptr= %d",*iptr);
	printf("*vptr= %d",*vptr);//error
}
// error:Invalid use of void expression
