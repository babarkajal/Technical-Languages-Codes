#include<stdio.h>

void main() {
		int a;
		float b;	
		char c;
		printf("Enter the numbers: ");
		scanf("%d",&a);
		scanf("%f",&b);
		scanf("%*c%c",&c);	
		printf("a= %d\n",a);
		printf("b= %f\n",b);
		printf("c= %c\n",c);

}



/* when we run the program it ask for the input.After taking the two inputs it stop the program.
suppose inputs are 10\n15.5\n 
a =10
f=\n15.5 (fkt floating value consider keli jate)
*c=\n
c=k
%*c reads the value from the console but never allocate it to the any varible
*/
