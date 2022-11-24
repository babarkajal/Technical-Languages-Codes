#include <stdio.h>

void main() {

	float a = 4.5f;
	//Yamdhe aapan 'a' ha float madhe ghetla aahe aani switch chya aata aapan forcefuly tyala integer madhe convert(type cast) karat aahot
        //mhanum float 4.5 ha integer madhe 4 honar tyamule case 4 execute hote.

	switch((int)a) {

		case 1:
			printf("Case 1\n");
			break;
		case 2:
			printf("Case 2\n");
			break;
		case 4:
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
			break;
	}
}
