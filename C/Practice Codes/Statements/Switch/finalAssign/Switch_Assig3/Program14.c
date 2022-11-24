#include <stdio.h>

void main() {

	int a = 4;

	//Error: bcz.
	//switch case madhe duplicate case allowed nahi.
	//ambuguity yete mhanun switch madhe kontihi case yekdach deyachi
	//ithe case 4  ani case 2+2 =case 4  donhi case same aahet.
	
	switch(a) {

		case 1:
			printf("Hello\n");
			break;
		case 4:
			printf("Hii\n");
			break;
		case 2+2:
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
	}
}
