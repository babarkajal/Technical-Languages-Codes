#include<stdio.h>

int main(){

	float a = 5.2;

	//Yamdhe aapan 'a' ha float madhe ghetla aahe aani switch chya aata aapan forcefuly tyala integer madhe convert(type cast) karat aahot
	//mhanum float 5.2 ha integer madhe 5 honar tyamule case 5 execute hote.

	switch((int)a){

		case 1:

			printf("one\n");
			break;
		case 5:

			printf("five\n");
			break;
		case 2:

			printf("two\n");
			break;
		default:

			printf("else\n");
			break;
	}
}
