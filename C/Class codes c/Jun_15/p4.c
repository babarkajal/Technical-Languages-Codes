#include <stdio.h>

struct complex{
		int re,im;
};

void main(){
		struct complex c1={2,3};
		const struct complex c2={4,5};

		printf("Add of c1 is= %p\n",&c1); //100
		printf("Add of real of c1 is= %p\n",&c1.re);//100
		printf("Add of im of c1 = %p\n",&c1.im);//104

		printf("Add of c2 is= %p\n",&c2);//200
		printf("Add of real of c2 is= %p\n",&c2.re);//200
		printf("Add of im of c2 = %p\n",&c2.im);//204
}
//same like array ,base address is same as   first element of structure
