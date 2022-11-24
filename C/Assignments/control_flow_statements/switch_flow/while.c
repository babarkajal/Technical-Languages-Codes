#include<stdio.h>

void p6(){
                printf("To printf series of number decremented by one.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		while(a>0){
			printf(" %d ",a--);
		}
	printf("\n\n");
}

void p7(){
		printf("Printf 'Go to Hell' 10 times.\n");
		int a;
		
		a=1;
		while(a<=10){
			printf("Go to Hell\n");
			a++;
		}
	printf("\n");
}


void p8(){
		printf("To printf Table of 2.\n");
		int a;

		a=1;//initilization
		while(a<=10){ //condition
			printf(" %d ",a*2);
			a++; //increment
		}
	printf("\n\n");
}


void p9(){
	        printf("To print table of 4 in decresing order.\n");
		int a;

		a=10;//initilization

		while(a > 0) { //condition
 
			printf(" %d ",a*4);

			a--; //decrement
		}
	printf("\n\n");
}




void p10(){
		printf("To print squares of numbers ranging from 1 to 15.\n");
		int a;

		a=1;//initilization

		while(a<=15){ //condition

			printf(" Square of %d: %d\n",a,a*a);

			a++; //increment
		}
	printf("\n\n");
}
