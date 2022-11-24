/*
Program 3: Write a Program to take input length and breadth of rectangle and
calculate its area.
Input : 10 20
Output : Area of rectangle = 200
*/

#include <stdio.h>

void main() {

	int length, breadth;
	
	/*take num for input from user  lenght and breadth
	 *check for condition 1
	 *condition 1:- value should be non-negative and non-zero
	 */

	do {
		//take input from user
		printf("Enter length: ");
		scanf("%d",&length);
		if(length <=0) {
			printf("Invalid!!! Please Enter non-negative and greater than 0\n");
		}
	}while(length <=0);

	do{
		printf("Enter breadth: ");
		scanf("%d",&breadth);
		
		if(breadth<=0 || length == breadth) {
			printf("Invalid!!! Please Enter non-negative value and not equals to the length \n");
		}
	}while(breadth<=0 || breadth==length);


	printf("Area of Rectagle= %d\n", length*breadth);
		

}
