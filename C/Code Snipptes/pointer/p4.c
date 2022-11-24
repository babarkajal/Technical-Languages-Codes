#include<stdio.h>

int main(){

int i = 5;

int *p;

p = &i;
printf("%p %p\n",&i, &p);	// 100 200
printf(" %p %p\n", *&p , &*p);	//addreess p 100 100

return 0;

}
