/*Program 3: Write a Program to check whether the entered number is
Palindrome number or not.
Input: 12321
Output: 12321 is a Palindrome Number.
*/



#include<stdio.h>


void main() {
	int num,rem,revNo=0;
	printf("Enter num: ");
	scanf("%d",&num);
	int temp = num;
	while(temp) {
		revNo = revNo*10+temp%10;
	        temp /=10;	
	}
	//if reversed num is same as input
	if(revNo == num)
		printf("%d is a palindrome num\n", num);
	else
		printf("%d is not a palindrome num\n", num);

}
