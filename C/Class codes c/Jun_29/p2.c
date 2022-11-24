//structure of shop
//pointer to the structure

#include <stdio.h>

struct food{
	char name[20];
	int price;
}*ptr;

void main(){

	//pointer to the structure
	ptr=(struct food*)malloc(sizeof(struct food) );
	printf("Enter name: ");
	scanf("%s",ptr->name);
	
	//access using pointer
	printf("Enter price: ");
	scanf("%d",&(*ptr).price);
	
	//print using pointer
	printf("\nEntered data: \n");
	printf("%s\t%d\n",ptr->name,ptr->price);
	
}
