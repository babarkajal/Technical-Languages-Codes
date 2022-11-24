#include<stdio.h>

int a= 0;
void fun() {
	printf( "In inner fun\n");
}
	

int main() {
	
	int a = 0;
	void fun() {
		printf( "In outer fun\n");
		a++;
		printf("%d\n",a);
	}
	fun();

}
