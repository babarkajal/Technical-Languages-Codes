/*
 * Program 5: Write a Program that accepts Three integers from user and prints
minimum number from them.
Input: 56 7 99
Output: The Minimum number amongst 56 7 & 99 is 7
*/

#include <stdio.h>

void main() {
	int num1,num2,num3;
	printf("Enter three numbers: ");
	scanf("%d%d%d" , &num1,&num2,&num3);

	int min = num1 < num2 ? ( num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3 );
      	printf("The minimum number among %d %d and %d is %d\n",num1,num2,num3, min);	


}
