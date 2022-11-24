#include<stdio.h>

void p16(){
                printf("To calculate factorial of the number.\n");
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
	        printf("To check whether number is prime or not.\n");
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
		printf("To check whether number is perfect or not.\n");
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
            printf("To check whether character is vowel or consonant.\n");
            char a;
            printf("Enter the character: ");
            scanf("%c",&a);

            if(a=='a' || a=='e'||a=='i' || a=='o'||a=='u' || a=='A'||a=='E' || a=='I'||a=='O' || a=='U')//if char==vowel
                printf("%c is Vowel.\n\n",a);

             else
                printf("%c is Cansonant.\n\n",a);

}
                

void p20(){
                printf("Take two no from user.Perform addition of even and multiplication of odd numbers ranging between them. \n");
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
                printf("To print series of prime numbers ranging up 1 to given number.\n");
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
                printf("To print factorial of numbers ranging up 1 to given number.\n");
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int factorial=1;

		for(int i=1 ; i<=num ; i++){
				factorial *= i;
				printf("factorial of %d: %d \n\n",i,factorial);
		}
}


void p23(){
                printf("To printf odd numbers from the given number.\n");
		int num,reversedNumber=0;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder

		div=num;
		while(div!=0){
				mod= div %10;
				reversedNumber =reversedNumber*10 + mod;
				div=div/10;
		}

		printf("odd numbers from the %d\n",num);

		div=reversedNumber;
		while(div != 0){
			mod=div % 10;//gives the last degit
				if(mod%2 != 0){
					printf("%d ",mod);
				}
			div =div/10;
		}
		printf("\n");
		
}
	 		
void p24(){
                printf("To printf even numbers from the given number.\n");
		int num,reversedNumber=0;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder
		printf("even numbers from the %d\n",num);
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
				}
			div =div/10;
		}
		printf("\n");
		
}


void p25(){
                printf("To count to digits present in the givrn number.\n");
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
	 			  
