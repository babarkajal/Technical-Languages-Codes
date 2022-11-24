/*Program 3: Write a Program to print following Pattern of series white-black,
black-white, white-black, black-white
Input: Number of rows: 3
Output:
white-black black-white white-black black-white
white-black black-white white-black black-white
white-black black-white white-black black-white
*/

#include <stdio.h>


void main() {
	char* series = "white-black black-white white-black black-white";

	int num;
	printf("Enter  num to print the series of white-black black-white white-black black-white: ");
	scanf("%d", &num);

	for(int i=0; i< num; i++) 
		printf("%s\n",series);

}
