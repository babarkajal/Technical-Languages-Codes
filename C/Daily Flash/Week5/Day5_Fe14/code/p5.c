/*Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of 1’s from it.
Input: 1211234
Output:
The number 1211234 Contains 3 One’s.
*/
#include <stdio.h>

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	int rem;
	//store the original num in another var
	int originalNo = num,countOne=0;

	while(num!=0) {
		rem = num%10;
		if (rem==1) 
			countOne++;
		num /=10;
	}
	printf("The %d num contains %d one's\n",originalNo,countOne);
}

