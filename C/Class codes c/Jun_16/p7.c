//malloc function

#include<stdio.h>

void main(){
	float *ptr =NULL;
	ptr=(float*)malloc(sizeof(float));//allocate size of float and return the void * 
	*ptr=30.25;
	printf("The value within block is %f\n",*ptr);
}
