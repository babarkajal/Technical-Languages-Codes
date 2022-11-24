/*
 * Program 1: Write a Program to print table in reverse order.
Input : 2
Output :
2 X 10 = 20
2 X 9 = 18
2 X 8 = 16
.
.
2 X 1 = 2
*/

#include <stdio.h>

void main() {

	int num;
	
	/*take num for input from user 
	 *check for condition
	 *condition :- value greater than 1
	 */

	do {
		//take input from user
		printf("Enter number: ");
		scanf("%d",&num);

		if(num <=0) {
			printf("Invalid!!! Please Enter input greater than 0\n");
		}
	}while(num<=0);


	/*for loop to print table in reverse order
	 * traverse from 10 to 1
	 */
	for(int lc =10; lc>=1 ; lc--) {
		printf("%d X %d = %d\n",num, lc , num*lc);
	}	

}
