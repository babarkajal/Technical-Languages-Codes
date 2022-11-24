#include <stdio.h>
void main() {

	int a;

	// here in switch case the value of a is intialize to 10 thats why case 10 is executed.
	
	switch(a=10) {
		
		case 0:

			printf("Case 0\n");
			printf("a= %d\n",a);
			break;
		case 1:
			printf("Case 1\n");
			printf("a= %d\n",a);
			break;
		case 10:
			printf("case 10\n");
			printf("a= %d\n",a);
			break;
		default:
			printf("Default\n");
			break;
	}
}
