#include <stdio.h>

void main() {
	int a;
	switch(a = (sizeof(int) > -1) ) {
			case 1:
				printf("true");
				break;
			case 2:
				printf("false");
				break;
			
	}
	printf("%d\n",a);


}
