//pointer to an array

#include<stdio.h>

void main(){
	int a[4]={10,20,30,40};
	
	//pointer to an array
	int *ptr=a;
	
	//access using ptr
	for(int i=0; i<4; i++){
		printf("a[%d]=%d\n",i,*(ptr+i));
	}
}
