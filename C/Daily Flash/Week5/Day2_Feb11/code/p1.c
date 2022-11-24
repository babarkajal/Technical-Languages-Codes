/*
 * Program 1: Write a Program to check whether the entered number by user is
Deficient or not.
{Note: A Number is termed as deficient number, if sum of all of its perfect
divisors is less than the number itself. E.g. 15 is deficient number, since 1 + 3 +
5 = 9 < 15.}
Input: 45
Output: 45 is Deficient Number.
*
*/

#include <stdio.h>
#include <malloc.h>

void main() {

	//allocate space of size int and store the address of it to the num
	int* num = (int*)malloc(sizeof(int));
	printf("Enter number to check whether: ");
	scanf("%d",num);
	int sumOfDiv=0;

	for(int div=1; div<= *num/2; div++) {
		if(*num%div == 0)
			sumOfDiv += div;

	}
	if(sumOfDiv < *num) 
		printf("%d is a deficient number\n",*num);
	else 
		printf("%d is not a deficient number\n",*num);

}
