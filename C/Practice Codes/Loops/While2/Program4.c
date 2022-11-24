/*Program 4. Write a C Program to print the countdown of days to submit the
assignment*/

#include<stdio.h>

void main()  {
	/* variable: num
	 * type: int
	 * initial value: garbage value
	 */
	int num;
	
	//take number of days to complete this assignment
	printf("Enter No of days to complete the assignment:  ");
	scanf("%d",&num);
	
	//iterate the loop til the number will become 0 when it becomes 0 that time loop will break
	while(num) {

		printf("%d days remaining\n",num);
		num--;						//dec for while loop
	}

	//when number will be zero then this condition will be true 
	if(num==0)  {

		printf("%d days Assignment is overdue\n",num);				
	}
}
