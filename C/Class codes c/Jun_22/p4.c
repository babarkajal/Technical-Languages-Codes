//link list to store hotel information

#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct hotel{
	char name[20];
	float profit;
	struct hotel *nextHotel;
};

//head node 
struct hotel *head=NULL;


void createHotel(){
		
		struct hotel *hptr=NULL;
		struct hotel *temp;
		
		char name[20];

		//allocate memory to the hotel
		hptr=(struct hotel*)malloc(sizeof(struct hotel));

		//accept the data from user
		printf("\nEnter hotel name: ");
		scanf("%s",hptr->name);

		printf("Enter Hotel profit: ");
		scanf(" %f",&hptr->profit);
		
		//nextlink is null
		hptr->nextHotel=NULL;

		if(head==NULL){
			head=hptr;
			temp=head;//for traversing
		}
		else{
			temp->nextHotel=hptr;
			temp=temp->nextHotel;//will point to the new added node
		}
}
			
//display function
void display(){
		struct hotel *temp=head;//pointing to the first hotel
		printf("\nHotel Name \tProfit\n");
		
		while(temp!=NULL){
			printf("%s\t\t%f\n",temp->name,temp->profit);
			temp=temp->nextHotel;
		}
}


void main(){
	int n;
	printf("Enter number of hotels: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		createHotel();
	}
	//display
	display();
}
