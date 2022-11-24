#include<stdio.h>

void p11(){
                printf("To printf even nos between two nos.\n");
	 	int var1,var2;
		printf("Enter 2 numbers: ");
		scanf("%d %d",&var1,&var2);
		printf("The even numbers lie between %d and %d: \n",var1,var2);

		for(int i=var1 ; i<=var2 ; i++){		
					if( i%2==0){
						printf("%d ",i);
					}
		}
	printf("\n");

}


void p12(){
		printf("\nTo print cubes of the odd numbers ranging bet 1-50.\n");
		
		for( int  i=1; i<=50 ; i++){
			
			if(i%2!=0){  //odd numbers
				printf("Cube of %d: %d\n",i,i*i*i);//cube
			}
		}
}

void p13(){
                printf("To print capital  and small letters.\n");
		printf("----------------*Capital letters*------------\n");

		for(int i=65 ; i<=90 ; i++){		
	
					printf(" %c ",i);
					
		}
		printf("\n\n--------------*Small letters*------------\n");

		for(int i=97 ; i<=122 ; i++){		
	
					printf(" %c ",i);
		}
	printf("\n");

}



void p14(){

		printf("To print Addition of 1 to 10 with 10 to 1.\n");
		
		
		int i,j;

		for( i=1 , j=10 ; i<=10,j>=1 ; i++,j-- ){
			
		             
				printf(" %d + %d = %d\n",i,j,i+j);
			}
}

void p15(){
		printf("To print NOs divisible by 4 ranging between 30-60\n");
		for(int i=30; i<=60 ; i++) {		

					if(i%4==0){     //divisible by 4
							printf("%d  ",i);
					}
		}
	printf("\n\n");
}
