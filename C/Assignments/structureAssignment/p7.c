#include<stdio.h>
struct bank{
	int accNo;
	char name[50];
	float bal;
	
};


void main(){
	struct bank b[4];
	
	printf("Enter the bank details---------- ");
	for(int i=0 ;i<4 ;i++){
			printf("\nEnter Account no: ");
			scanf("%d",&b[i].accNo);	
			printf("Enter Name: ");	
			scanf("%s",b[i].name);
			printf("Enter balance: ");
			scanf("%f",&b[i].bal);	
	}
	
	printf("\nDetails of bank holder having bal less than 1500:\n");
	for(int i=0;i<4;i++){
		if(b[i].bal < 1500){
			printf("Name: %s\n",b[i].name);
			printf("Account number: %d\n",b[i].accNo);
			printf("\nYour account balance is low\n");
		}
	}
	printf("----------bank Record------------\n");
	printf("Name\t\tAcc NO\t\tBalance\n");
	for(int i=0;i<4;i++){
				printf("%s\t\t%d\t\t%.2f\n",b[i].name,b[i].accNo,b[i].bal);
	}
}
