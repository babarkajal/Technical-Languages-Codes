#include <stdio.h>

#define ISEQUAL(X,Y) X==Y 

int main() {
	#if ISEQUAL(X,0)
		printf("core");
	#else 
		printf("core2");
	#endif
	return 0;
}
