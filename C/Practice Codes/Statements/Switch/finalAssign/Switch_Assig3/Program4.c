#include <stdio.h>

int main() {

	int x = 2;

	//ithe switch madhe leftshift operator use kela aahe.
	//x<<(x+1) = 2<<(2+1) = (2<<3)
	//x pahila binary madhe convert hoto
	//x = 2 = 0010
	//binary madhe convert zalya nantar tyachya vr left shift operation zal
	//
	//	2<<3
	// 	0010    left shift by 3
	//   0010000	=16   left shift kelya nantar milalel ans he 16 aahe
	
	// Yachya madhe case 16 present nahi mhanun default case run hotiye aani default nantar break naslyamule case 1 suddha run hote.
	
	switch(x << (x + 1)) {

		default:
			
			printf("\ndefault");
		case 1:

			printf("\n1");
			break;
		case 2:
	
			printf("\n2");
			break;
		case 3:

			printf("\n3");
			break;
		case 4:

			printf("\n4");
			break;
		case 8:
			printf("\n8");
			break;
	}
	return 0;
}
