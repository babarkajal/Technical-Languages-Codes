#include<stdio.h>


void p1() {
                printf("\nTo check no is greater than 10 or not.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a > 10)
			printf("%d is greater than 10.\n\n",a);
		else
			printf("%d is less than 10.\n\n",a);
}



void p2(){
		printf("\nTo find the difference bet two characters.\n");
		char a,b;
		printf("Enter the two characters: ");
		scanf(" %c  %c",&a,&b);
	
		if(a == b)
			printf("%c = %c\n\n",a,b);
		
		else if(a < b){
			int i,c;
		        for( i=a+1,c=0;i<=b;i++){//for counting positions 
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
		printf("\nTo check no is even or odd.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is an even no.\n\n",a);
		else
			printf("%d is an odd no.\n\n",a);
}


void p4() {
            printf("\nTo check character is upper or lower case.\n");
            char a;
            printf("Enter the character: ");
            scanf(" %c",&a);
            if(a>=97 && a<=122)
                printf("%c is LOWER CASE character.\n\n",a);
             else
                printf("%c is an UPPER CASE character.\n\n",a);

}



void p5(){
		printf("\nTo check no is greater or less than or equal to 0.\n");
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

void p6(){
                printf("\nTo printf series of number decremented by one.\n");
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		while(a>0){
			printf(" %d ",a--);
		}
	printf("\n");
}

void p7(){
		printf("\nTo Print 'Go to Hell' 10 times.\n");
		int a;
		
		a=1;
		while(a<=10){
			printf("Go to Hell\n");
			a++;
		}
	printf("\n");
}


void p8(){
		printf("\nTo printf Table of 2.\n");
		int a;

		a=1;//initilization
		while(a<=10){ //condition
			printf(" %d ",a*2);
			a++; //increment
		}
	printf("\n\n");
}


void p9(){
	        printf("\nTo print table of 4 in decresing order.\n");
		int a;

		a=10;//initilization

		while(a > 0) { //condition
 
			printf(" %d ",a*4);

			a--; //decrement
		}
	printf("\n\n");
}




void p10(){
		printf("\nTo print squares of numbers ranging from 1 to 15.\n");
		int a;

		a=1;//initilization

		while(a<=15){ //condition

			printf(" Square of %d: %d\n",a,a*a);

			a++; //increment
		}
	printf("\n\n");
}



void p11(){
                printf("\nTo printf even nos between two nos.\n");
	 	int var1,var2;
		printf("Enter 2 numbers: ");
		scanf("%d %d",&var1,&var2);
		printf("The even numbers lie between %d and %d: \n",var1,var2);

		for(int i=var1 ; i<=var2 ; i++){		
					if( i%2==0){
						printf("%d ",i);
					}
		}
	printf("\n\n");

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
                printf("\nTo print capital  and small letters.\n");
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

		printf("\nTo print Addition of 1 to 10 with 10 to 1.\n");
		
		
		int i,j;

		for( i=1 , j=10 ; i<=10,j>=1 ; i++,j-- ){
			
		             
				printf(" %d + %d = %d\n",i,j,i+j);
			}
}

void p15(){
		printf("\nTo print NOs divisible by 4 ranging between 30-60\n");
		for(int i=30; i<=60 ; i++) {		

					if(i%4==0){     //divisible by 4
							printf("%d  ",i);
					}
		}
	printf("\n\n");
}





void p16(){
                printf("\nTo calculate factorial of the number.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int factorial=1;

		for(int i=1 ; i<=num ; i++){
				factorial *= i;
		}
		printf("Factorial of %d is %d.\n\n",num,factorial);
}

void p17(){
	        printf("\nTo check whether number is prime or not.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int count=0;
	
		for(int i=1 ; i<=num ; i++){

			   if ( num%i==0)
				count++;	
			
			  
		}
		if(count==2)
			printf("%d is a prime number!\n\n",num);
		else
			printf("%d is not prime number!\n\n",num);
		
}


void p18(){
		printf("\nTo check whether number is perfect or not.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int sumDiv=0;

		for(int i=1 ; i<num ; i++){

			   if(num % i==0)
		                   sumDiv = sumDiv + i;//addition of divisors
		}

		if(sumDiv==num)//sum of divisor==num ->perfect number
			printf("%d is perfect number\n\n",num);

		else
			printf("%d is not perfect number\n\n",num);
		
}



void p19() {
            printf("\nTo check whether character is vowel or consonant.\n");
            char a;
            printf("Enter the character: ");
            scanf(" %c",&a);

            if(a=='a' || a=='e'||a=='i' || a=='o'||a=='u' || a=='A'||a=='E' || a=='I'||a=='O' || a=='U')//if char==vowel
                printf("%c is Vowel.\n\n",a);

             else
                printf("%c is Cansonant.\n\n",a);

}
                

void p20(){
                printf("\nTake two no from user.Perform addition of even and multiplication of odd numbers ranging between them. \n");
		int num1,num2;
		printf("Enter two number: ");
		scanf("%d %d",&num1,&num2);
		int sum=0;
		int mul=1;

		printf("----------Addition of even and multiplication of odd numbers ranging from %d to %d-----------\n\n",num1,num2);
		for(int i=num1 ; i<=num2 ; i++){

			   if(i % 2==0)
		                   sum = sum+i;//addition o even
			  else
				   mul=mul*i;
 		}
			printf("Addition of even numbers:  %d.\n\n",sum);

			printf("multiplication of odd numbers: %d.\n\n",mul);
		
}



void p21(){
                printf("\nTo print series of prime numbers ranging up 1 to given number.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int count;
		printf("-------------------*List of prime numbers from 1 to %d*-----------------------\n",num);
		for(int i=1 ; i <= num ; i++){
			
			count=0;
			for(int j=1;j<=num;j++){
					
					 if(i%j==0)
						count++;//if i divisible by j then count =count+1
					 
			}
			if(count==2)
				printf("%d ",i);
						
			   		 
		}

		printf("\n");
		
}



void p22(){
                printf("\nTo print factorial of numbers ranging up 1 to given number.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		long  factorial=1;

		for(int i=1 ; i<=num ; i++){
				factorial *= i;
				printf("factorial of %d: %ld \n\n",i,factorial);
		}
}


void p23(){
                printf("\nTo printf odd numbers from the given number.\n");
		int num,reversedNumber=0;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder
                int flag=0;
                
		div=num;
		while(div!=0){
				mod= div %10;
				reversedNumber =reversedNumber*10 + mod;
				div=div/10;
		}

		printf("odd numbers from the %d: ",num);
                
		div=reversedNumber;
		while(div != 0){
			mod=div % 10;//gives the last degit
				if(mod%2 != 0){
					printf("%d ",mod);
					flag=1;
					
				}
			div =div/10;
		}
		
		//if no odd numbers
		if(flag==0)
		           printf("0\n");
		printf("\n");
		
}
	 		
void p24(){
                printf("\nTo printf even numbers from the given number.\n");
		int num,reversedNumber=0;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder
		int flag=0;
		
		printf("even numbers from the %d: ",num);
		div=num;
		while(div!=0){
				mod= div %10;
				reversedNumber =reversedNumber*10 + mod;
				div=div/10;
		}
		div=reversedNumber;
		while(div!= 0){
			mod=div % 10;//gives the last degit
				if(mod%2 == 0){
					printf("%d ",mod);
					flag=1;
				}
			div =div/10;
		}
		
		//if no even numbers
		if(flag==0)
		        printf("0\n");
		        
		printf("\n");
		
}


void p25(){
                printf("\nTo count to digits present in the givrn number.\n");
		int num;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder
		int count=0; //counting number of digits
	
		div=num;
		
		while(div > 0){
			mod=div % 10;//gives the last degit
			count++;
			div =div/10;
		}
		printf("Number of digits in the number %d : %d.\n\n",num,count);
		
		
}





void p26(){
		printf("\nTo perform addition of sqaures of each digit of given number.\n");
		int num;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addSquare=0; //counting number of digits
		int square;
		div=num;
		
		while(div > 0){
			mod=div % 10;//gives the last digit
			square=mod * mod;
			addSquare = addSquare + square;
			div =div/10;
		}
		printf("Addition of sqaures of each digits in  %d : %d.\n\n",num,addSquare);
		
		
}


void p27(){
		printf("\nTo perform addition of factorial of each digit of given number.\n");
		int num;
		printf("enter the number: ");
		scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addFact=0; 
		int fact;
		
		div=num;//initlization
		
		while(div > 0){
			mod=div % 10;//gives the last digit
				
	//calculating fact of each digit
			fact=1;
			for(int i=1; i<=mod ; i++){
					fact=fact*i;
			}
			addFact += fact; 

			div =div/10;
		}
		printf("Addition of factorials of each digits in %d : %d\n\n",num,addFact);
		
		
}

void p28(){
                printf("\nTo print pallindrome number.\n");
		int div,num,reversedNumber;
		int mod;
		printf("Enter the number(above 100): ");
		scanf("%d",&num);
		for(int i=101;i<=num;i++){
			reversedNumber=0;
			div=i;
			while(div!=0){
				mod= div %10;
				reversedNumber = reversedNumber*10 + mod;
				div=div/10;
		      	}
			if(i==reversedNumber){
				
				printf("%d\n",reversedNumber);
		        }
		}
}

void p29(){
	        printf("\nTo check the given number is armstrong number or not.\n");
		int num;
		printf("enter the number: ");
	       	scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addCube=0; //counting number of digits
		int cube;
		div=num;
		
		while(div > 0){
			mod=div % 10;//gives the last digit
			cube=mod * mod * mod;
			addCube = addCube + cube;
			div =div/10;
		}
	
		printf("Addition of cubes of each digits in  %d : %d.\n\n",num,addCube);
		
		if( num==addCube )
			printf("%d is an Armstrong number.\n\n",num);
		else
			printf("%d is not an Armstrong number.\n\n",num);
		
		
}


void p30(){
		printf("\nTo check the given number is strong number or not.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addFact=0; 
		int fact;
		
		div=num;//initlization
		
		while(div > 0){
			mod=div % 10;//gives the last digit
				
	//calculating fact of each digit
			fact=1;
			for(int i=1; i<=mod ; i++){
					fact=fact*i;
			}

			addFact += fact; //additon of fact

			div =div/10;
		}

		printf("\nAddition of factorials of each digits in %d : %d\n",num,addFact);
		
		if( num ==addFact)	
			printf("%d is a strong number.\n\n",num);
		else
			printf("%d is not a strong number.\n\n",num);
}


