#include <stdio.h>

void main() {

	int x = 10;
	int y = 20;

	switch(x) {

		//Error: Ithe error yeto karan switch case madhe nehami compile time constant value lagate(eg. integer or character),
		//case lable la ji value dili jate ti compile time la constant value ne replace hote mhanun case lable la nehami 'r' value pass karaychi 'l' value nahi. 
		
		case x:
	
			printf("Case 10\n");
			printf("x= %d\n",x);
			break;
		case y:

			printf("Case 20\n");
			printf("y= %d\n",y);break;
		default:
			printf("Default\n");
			break;
	}
}
