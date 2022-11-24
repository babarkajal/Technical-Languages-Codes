#include <stdio.h>

#define X 3
#if !X 
	printf("Core\n");
#else
	printf("Web\n");
#endif

int main() {
	return 0;
}

