#include<stdio.h>

//structure declaration
struct book{
	char bookName[30];
	char authorName[30];
	char publication[30];	
	int noOfPages;
	float price;	
}b[3]; //array of strcture


void main(){
	//accpet data
	printf("ENTER BOOK DETAILS: \n");
	for(int i=0 ;i<3; i++){
		printf("\nEnter details of book %d:\n",i+1);
		printf("Enter book name: ");
		scanf("%s",b[i].bookName);
		printf("Enter author name: ");
		scanf("%s",b[i].authorName);
		printf("Enter publication: ");
		scanf("%s",b[i].publication);
		printf("Enter number of pages: ");
		scanf("%d",&b[i].noOfPages);
		printf("Enter price: ");
		scanf("%f",&b[i].price);
	}

	//print data
	printf("\n----------Book record---------\n");
	printf("Name\t\tauthor name\t\tpublication\t\tPages\t\tprice\n");
	for(int i=0 ;i<3 ;i++){
		printf("%s\t\t%s\t\t%s\t\t%d\t\t%f\n",b[i].bookName ,b[i].authorName ,b[i].publication,b[i].noOfPages ,b[i].price);
	}

}
