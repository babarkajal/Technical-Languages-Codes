/*Program 3: Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81
*/

#include<stdio.h>

void main() {
	int n;
	printf("Enter Integer: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
			printf("Cube of %d : %d and Square of %d : %d\n", i, i*i*i , i , i*i);
	}
	printf("\n");
}
