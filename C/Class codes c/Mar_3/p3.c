#include<stdio.h>


void main() {
	int i=10,j=20;
	if(i==j)
		printf("Hello\n");
	if(i || j)//T || T=T
		printf("Hii\n");
	if(i && j) // T || T=T
		printf("Go to hell\n");

}
