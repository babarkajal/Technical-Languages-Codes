#include <stdio.h>

//function declaration
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();


void main(){
	extern int a[5];	
	int ch;
	char ans;
	do{
		printf("\n*-*-*-*-*-*-*-*-*-*-*Menu*-*-*-*-*-*-*-*-*-*-*\n");
		printf("1.Program 1\n");
		printf("2.Program 2\n");
		printf("3.Program 3\n");
		printf("4.Program 4\n");
		printf("5.Program 5\n");
		printf("6.Program 6\n");
		printf("7.Exit\n");
		printf("\nEnte your choice: \n");
		scanf("%d",&ch);
		
		switch(ch){
				
			case 1: p1();
				printf("\n======================================================================================\n\n");
				break;
			case 2: p2();
				printf("\n======================================================================================\n\n");
				break;
			case 3: p3();
				printf("\n======================================================================================\n\n");
				break;
			case 4: p4();
				printf("\n======================================================================================\n\n");
				break;
			case 5: p5();
				printf("\n======================================================================================\n\n");
				break;
			case 6: p6();
				printf("\n======================================================================================\n\n");
				break;
			case 7: 
				break;
			default:
				printf("\nInvalid option!!!!!\n");
				printf("\n======================================================================================\n\n");
				break;
		}
		printf("\nDo you want try more programs(press y/n): ");
		scanf(" %c",&ans);
	}while(ans=='y');
}
