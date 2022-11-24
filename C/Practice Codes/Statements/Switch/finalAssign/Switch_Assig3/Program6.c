#include<stdio.h>

void main() {

	int a=5, b=3;

	switch(a) {

		//Error: Ithe error yeto karan switch case madhe nehami compile time constant value lagate(eg. integer or character),
                //case lable la ji value dili jate ti compile time la constant value ne replace hote mhanun case lable la nehami 'r' value 
		//pass karaychi 'l' value nahi. 
		case 1:
			printf("One\n");
		case 5:
			printf("Two.\n");
		case b:
			printf("Three.\n");
		case 'a':
			printf("Four.\n");
		default:
			printf("Default.\n");}
	}
}
