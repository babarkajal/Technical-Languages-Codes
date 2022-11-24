/*
Program 1: Write a Program that prints whether a number entered by user is
Disarium Number or not.
{Note: A number can be termed as Disarium number if the sum of every digits
raised by their position in that number is equal to that number. E.g. 135, 1 is at
position 1, 3 is at position 2 & 5 is at position 3, then 1^1 + 3^2 + 5^3 = 1 + 9 +
125 = 135, so 135 is a Disarium Number}
Input: 89
Output: 89 is a Disarium Number.
*/


#include<stdio.h>
#include<malloc.h>


//calculate power 
int power(int  base, int num) {
	int result = 1;
	for(int i=1;i<=num; i++) 
		result = result * base;
	return result;
}//end of fun

//----function to chech whether the num is disarium or not -----
int isDisarium(int num) {
		/*num:-to store sum
		 * temp:- to perform op on the num
		 */
		int sum=0, temp=num;
		//create array to store the digits
		int *arrDigit = (int*)calloc(sizeof(int), 20);
		int len=0;
		//add digits to the array
		while(temp) {
			arrDigit[len++] = temp%10;
			temp /=10;
		}
		int exp =1;
		//traverse the array from last and get the num raised  by theire position
		for(int lc= len-1; lc>=0; lc--) {
			sum += power(*(arrDigit + lc),exp);
			exp++;
		}

		if(num == sum)
			return 1;
		else 
			return 0;
}

void main() {
	int num;
	printf("Enter num to check whether is it a disarium num or not: ");
	scanf("%d",&num);
	power(num, 3);

	if(isDisarium(num)) {
		printf("%d is a disarium num\n",num);
	} else {
		printf("%d is not a disarium num\n",num);
	}
}
