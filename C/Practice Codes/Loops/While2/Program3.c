/*Program 3: Write a C Program which takes a number as input from user if number is
  even print that number in reverse order to 1 and if the number is odd print that
  number in reverse order by difference two to 1.*/

#include<stdio.h>

void main()  {
	/* varible num
	 * type: integer 
	 * initial value: garbage 
	 */
	int num;

	//get a value from user
	printf("Enter Number: ");

	//scanf will take value from user which is of type int
	scanf("%d",&num);
	
	//in que is it given that if number is even then print in reverse order by difference of 1
	//for even condition is that number should be divisible by 2 i.e. num%2 =0
	if(num%2==0)  {	
			
		// print from number to 1 therefore here we have to decrement that value 
		while(1<=num)  {

			printf("%d ",num); 		//print that num
			num--;				//dec that num
		}
	}

	//else number is odd then we have to print that in reverse order by difference of 2
	else  {
		
		while(1<=num)  {

			printf("%d ",num);
			num-=2;				//dec that number by two
		}
	}
	printf("\n");		
}
