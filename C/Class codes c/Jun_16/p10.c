//malloc function

#include<stdio.h>
#include<malloc.h>
void main(){
	int *ptr,i;
	ptr=(int*)calloc(3,sizeof(float));//allocate size of int*3 like array and return the void * 
	for(i=0;i<=2;i++)
		*(ptr+i)=10+i;
	
	for(i=0;i<=2;i++)
		printf("value at index %d =%d\n", i,*(ptr+i));
	
}
