#include <stdio.h>

//scope of  this var is global and can be accessible from another file
extern int i=10;
void main() {
	printf("common var %d\n",i);
	fun();
	printf("common var %d\n",i);
}
