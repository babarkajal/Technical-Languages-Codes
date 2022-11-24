//#include <stdio.h>
int printf(const char* ,...);

void fun(int i,...) {

	printf("Inside the fun\n");
	return 10;
}
main() {

	fun(10);
//	printf("%d\n",i);
	printf("After the fun\n");

}
