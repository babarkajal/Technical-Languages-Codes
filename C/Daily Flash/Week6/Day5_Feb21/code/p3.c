/*Program 3: Write a Program that takes a number as input from user and prints
it into words.
Input: 1234
Output: One Two Three Four
*/

#include <stdio.h>

void main() {
	int input,rem;
	char* num[] = {"Zero","One","Two", "Three", "Four", "Five", "Six" , "Seven", "Eight", "Nine"};

	printf("Enter integer num: ");
	scanf("%d",&input);

 	char* output[20] = {};
	int len=0;
	while(input) {
		rem = input%10;
		output[len++] = num[rem];
		input /=10;
	}

	printf("Output\n");
	for(int i=len-1; i>=0;i--) {
		printf("%s  ", *(output +i));
	}
	printf("\n");

}
