/*Program 5. Write a C Program, that prints square of odd numbers and cube of even
numbers. Take lower bound & upper bound of numbers range from user.
*/

#include<stdio.h>

void main()  {
	/* variable: lB , uB
	 * type: int,int
	 * initial value: garBage
	 */
	int lB,uB;
	
	//take lower and upper range from user
	printf("Enter Lower bound of range: ");
	scanf("%d",&lB);
	printf("Enter Upper bound of range: ");
	scanf("%d",&uB);
	
	//iterate from lower Bound to upper Bound 
	while(lB<=uB)  {
		//if number is even  then print its cube
		if(lB%2==0)
			printf("%d ",lB*lB*lB);
		//if not then print its square
		else

			printf("%d ",lB*lB);
		lB++;								//inc condition for while loop
	}
	printf("\n");

}
