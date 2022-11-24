#include <stdio.h>

void main() {

	int a = 20;

	//here in switch first we have to convert 'a' into binary format 
	// a=20= 10100
	// then flip all its bit and do twos compliment
	// hence doing this and representing that back into 
	// decimal gives us --> -21 ...hence case -21 is executed
	

	switch(~a) {

		case 20:

			printf("Case 20\n");
			printf("a= %d\n",a);
			break;
		case -20:

			printf("Case -20\n");
			printf("a= %d\n",a);
			break;
		case -21:

			printf("case -21\n");
			printf("a= %d\n",a);
			break;
		default:

			printf("Default\n");
			break;
	}
}
