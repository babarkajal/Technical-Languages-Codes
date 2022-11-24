#include <stdio.h>

void areaCircle(){

		printf("\nTo calculate area of a circle\n");
		int r;
		printf("Enter the radius of the circle: ");
		scanf("%d",&r);
		printf("Area of a circle: %f \n",(3.14* r * r) );
}


void main(void ){

		//Function pointer		
		void (*ptr) ();
		//Pointing to the areaCircle() fun
		ptr=areaCircle;
		//function call using pointer
		ptr();
}

