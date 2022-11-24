//realloc function and address

#include<stdio.h>
#include<malloc.h>

void main(){
	int *ptr,i;
	int *ptr2=NULL;

	//allocate space by using calloc
	ptr=(int*)calloc(3,sizeof(int));//allocate 12 byte memory and return add
	
	printf("Address of ptr allocated by calloc: %p\n",&ptr);
	for(i=0; i<3 ;i++){
		*(ptr+i)=10+i;
	}
	
	
	ptr2=(int*)malloc(sizeof(int));
	printf("Address of ptr2 allocated by malloc: %p\n",&ptr2);
	
		
	
	//reallocate the allocated space
	ptr=(int*)realloc(ptr,5*sizeof(int));
	
	//same as of allocated by calloc
	printf("Address of ptr allocated by recalloc: %p\n",&ptr);
	
	ptr[3]=13;
	ptr[4]=14;	
	
	printf("Data in ptr\n");
	for(i=0; i<5 ;i++){
		printf("%d\n",*(ptr+i));
	}
}
