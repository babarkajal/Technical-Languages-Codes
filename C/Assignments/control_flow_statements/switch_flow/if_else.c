#include<stdio.h>


void p1() {
                printf("To check no is greater than 10 or not.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a > 10)
			printf("%d is greater than 10.\n\n",a);
		else
			printf("%d is less than 10.\n\n",a);
}



void p2(){
		printf("To find the difference bet two characters.\n");
		char a,b;
		printf("Enter the two characters: ");
		scanf("%c",&a);
		scanf(" %c",&b);
		if(a == b)
			printf("%c = %c\n\n",a,b);
		
		else if(a < b){
			int i,c;
		        for( i=a+1,c=0;i<=b;i++){
				c++;
			}
			printf("Difference between %c and %c is %d\n\n",a,b,c);
		}
		
		else {	
			int i,c;
		        for( i=a-1,c=0;i>=b;i--){
				c++;
			}
			printf("Difference between %c and %c is %d\n\n",a,b,c);
		}
}


void p3(){
		printf("To check no is even or odd.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is an even no.\n\n",a);
		else
			printf("%d is an odd no.\n\n",a);
}


void p4() {
            printf("To check character is upper or lower case.\n");
            char a;
            printf("Enter the character: ");
            scanf("%c",&a);
            if(a>=97 && a<=122)
                printf("%c is LOWER CASE character.\n\n",a);
             else
                printf("%c is an UPPER CASE character.\n\n",a);

}



void p5(){
		printf("To check no is greater or less than or equal to 0.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a > 0)
			printf("%d is greater than 0.\n\n",a);

		else if(a < 0)
			printf("%d is less than 0.\n\n",a);
		
		else
			printf("%d is equal to 0.\n\n",a);
}


