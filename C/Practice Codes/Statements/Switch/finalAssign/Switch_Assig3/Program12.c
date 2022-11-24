/*Write a program which will convert the number into relative week of day
e.g
Input: 4
output: Thursday
*/


#include<stdio.h>

void main()  {

	int num;

	printf("Enter day number: ");
	scanf("%d",&num);

	switch(num)  {

		case 1:
			printf("Sunday\n");
			break;
		case 2:
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
		default:
			printf("We have only 7 days in a week\n");
	}

}
