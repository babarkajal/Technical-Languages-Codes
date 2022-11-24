#include<stdio.h>
struct TV{
	char name[20];
	float price;
	
}t={"SONY",30000};

void main(){
	struct TV *tptr=&t;//pointer to the struture
	
	printf("Address of pointer: %p\n",&tptr);
	printf("Name of tv: %s\n",(*tptr).name);//direction
	printf("Price: %.2f\n\n",tptr->price);//selection
	
	//size
	printf("Size of(struct TV): %d\n",sizeof(struct TV));
	printf("Size of(struct TV*): %d\n",sizeof(struct TV*));
}
	
