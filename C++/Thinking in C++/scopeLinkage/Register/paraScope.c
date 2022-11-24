#include <stdio.h>

void add(static int i  , extern int j) {
	printf("%d\n",i+j);
}



int main() {

	add(10,20);
}
