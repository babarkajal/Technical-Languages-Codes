#include<stdio.h>

//function declarations
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void p8();
void p9();
void p10();
void p11();
void p12();
void p13();
void p14();
void p15();
void p16();
void p17();
void p18();
void p19();
void p20();
void p21();
void p22();
void p23();
void p24();
void p25();
void p26();
void p27();
void p28();
void p29();
void p30();


void if_else(){
		int choice;
		char ans;
		do {
			printf("\nProgram 1:\n");
			printf("Program 2:\n");
			printf("Program 3:\n");
			printf("Program 4:\n");
			printf("Program 5:\n");
		printf("\nEnter Program number: ");
		scanf("%d",&choice);
		
		switch(choice){
				case 1: p1();
				break;
				case 2: p2();
				break;
				case 3: p3();
				break;
				case 4: p4();
				break;
				case 5: p5();
				break;
				default: printf("Wrong choice,try again\n");
				break;
		}
		printf("\nWant to continue(y/n): ");
		scanf(" %c",&ans);
		}while(ans=='y');
}


void while_loop() {
		        int choice;
		        char ans;
		do {
			printf("\nProgram 6:\n");
			printf("Program 7:\n");
			printf("Program 8:\n");
			printf("Program 9:\n");
			printf("Program 10:\n");
		printf("\nEnter Program number: ");
		scanf(" %d",&choice);
		
		switch(choice){
				case 6: p6();
				break;
				case 7: p7();
				break;
				case 8: p8();
				break;
				case 9: p9();
				break;
				case 10: p10();
				break;
				default: printf("Wrong choice,try again\n");
				break;
		}
		printf("\nWant to continue(y/n): ");
		scanf(" %c",&ans);
		}while(ans=='y');
}

void for_loop(){
		int choice;
		char ans;
		do {
			printf("\nProgram 11:\n");
			printf("Program 12:\n");
			printf("Program 13:\n");
			printf("Program 14:\n");
			printf("Program 15:\n");
		printf("\nEnter Program number: ");
		scanf("%d",&choice);
		
		switch(choice){
				case 11: p11();
				break;
				case 12: p12();
				break;
				case 13: p13();
				break;
				case 14: p14();
				break;
				case 15: p15();
				break;
				default: printf("Wrong choice,try again\n");
				break;
		}
		printf("\nWant to continue(y/n): ");
		scanf(" %c",&ans);
		}while(ans=='y');
}


void Mixed_codes(){
		int choice;
		char ans;
		do {
			printf("\nProgram 16 to ");
			printf("Program 25:\n");
		printf("\nEnter Program number: ");
		scanf("%d",&choice);
		
		switch(choice){
				case 16: p16();
				break;
				case 17: p17();
				break;
				case 18: p18();
				break;
				case 19: p19();
				break;
				case 20: p20();
				break;
				case 21: p21();
				break;
				case 22: p22();
				break;
				case 23: p23();
				break;
				case 24: p24();
				break;
				case 25: p25();
				break;
				default: printf("Wrong choice,try again\n");
				break;
		}
		printf("\nWant to continue(y/n): ");
		scanf(" %c",&ans);
		}while(ans=='y');
}


void hard_codes(){
		int choice;
		char ans;
		do {
			printf("\nProgram 26:\n");
			printf("Program 27:\n");
			printf("Program 28:\n");
			printf("Program 29:\n");
			printf("Program 30:\n");
		printf("\nEnter Program number: ");
		scanf("%d",&choice);
		
		switch(choice){
				case 26: p26();
				break;
				case 27: p27();
				break;
				case 28: p28();
				break;
				case 29: p29();
				break;
				case 30: p30();
				break;
				default: printf("Wrong choice,try again\n");
				break;
		}
		printf("\nWant to continue(y/n): ");
		scanf(" %c",&ans);
		}while(ans=='y');
}


