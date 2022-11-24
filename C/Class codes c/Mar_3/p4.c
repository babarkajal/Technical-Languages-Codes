#include<stdio.h>


void main() {
	int i=32,j=8;
	if(++i == ++j)
		printf("Inside if statement\n");
	printf("i=%d\n",i);
	printf("j=%d\n",j);

}
