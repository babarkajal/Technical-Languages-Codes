//structure of shop
//pointer to the structure

#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct book{
	char name[20];
	float price;
};

struct bag{
	char campany[20];
	int price;
};

struct food{
	char name[20];
	int price;
};


struct SHOP{
	struct book BOOK;
	struct bag BAG;
	struct food FOOD;
	int no_Of_Workers;
	struct SHOP *next;	
};

void main(){

	//pointer to the structure
	struct SHOP *ptr;
	ptr=(struct SHOP*)malloc(sizeof(struct SHOP) );//allocate memory on the heap

	//assign details to the structure book 	
	strcpy((*ptr).BOOK.name, "ANSI C");
	ptr->BOOK.price=500;
	
	//assign details to the structure bag 	
	strcpy((*ptr).BAG.campany, " SKY BAG");
	ptr->BAG.price=800;

	//assign details to the structure food 	
	strcpy((*ptr).FOOD.name, "Wadapav");
	ptr->FOOD.price=10;
	
	//access value to no_of_workers
	ptr->no_Of_Workers=10;
	

	//second details by using object
	struct SHOP obj={"java",599,"American tourist","1000"};
	struct SHOT *ptr2=&obj;
		
	//join ptr2 to the ptr 1 as link
	ptr->next=ptr2;

	//print using pointer
	printf("\nBook details: \n");
	printf("Book name = %s\t price = %f\n",ptr->BOOK.name,ptr->BOOK.price);
	
	
	printf("\nBag details: \n");
	printf("Bag name= %s\t price = %d\n",ptr->BAG.campany,ptr->BAG.price);
	

	printf("\nFood details: \n");
	printf("Food name=%s\t price = %d\n",ptr->FOOD.name,ptr->FOOD.price);
	
	//workers
	printf("\nNo of workers int shop are %d.\n",ptr->no_Of_Workers);
	printf("\nBook details: \n");
	printf("Book name = %s\t price = %f\n",ptr2->BOOK.name,ptr2->BOOK.price);

}
