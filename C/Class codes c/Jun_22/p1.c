//realloc function

#include<stdio.h>
#include<malloc.h>

void main(){
	int *ptr,i;
	
	//allocate space by using calloc
	ptr=(int*)calloc(3,sizeof(int));//allocate 12 byte memory and return add
	
	for(i=0; i<3 ;i++){
		*(ptr+i)=10+i;
	}
	
	//reallocate the allocated space
	ptr=(int*)realloc(ptr,5*sizeof(int));
	
	ptr[3]=13;
	ptr[4]=14;	
	
	printf("Data in ptr\n");
	for(i=0; i<5 ;i++){
		printf("%d\n",*(ptr+i));
	}
}
