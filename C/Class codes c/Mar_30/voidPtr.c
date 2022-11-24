#include<stdio.h>

void main(){
		int a=110;
		int *iptr= &a;
		void *vptr= &a;
		printf("*iptr= %d\n",*iptr);//110
		printf("*vptr= %d\n",*((int *)iptr)  );//110
}
