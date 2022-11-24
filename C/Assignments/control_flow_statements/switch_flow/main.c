#include<stdio.h>

//function declaration
 
void if_else();
void while_loop();
void for_loop();
void Mixed_codes();
void hard_codes();

void main(){
		int choice;
		char ans;
		do {
			printf("\n\n----------------------------------*List of codes*--------------------------------------------\n");
			printf("1.If-else statement\n");
			printf("2.While loop\n");
			printf("3.For loop\n");
			printf("4.Mixed codes\n");
			printf("5.Hard codes\n");
		

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice){
        			case 1:
					if_else();
				break;
				case 2:
					while_loop();
				break;

				case 3:	
					for_loop();
				break;
		
				case 4:
					Mixed_codes();
				break;
		
				case 5:
					hard_codes();
				break;

				default:
					printf("\nEnter valid choice.\n");
				break;

		}
			printf("\nWant another type of codes(press y/n): ");
			scanf("%*c%c",&ans);
		}while(ans=='y');

}

