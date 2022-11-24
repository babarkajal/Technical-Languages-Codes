#include<stdio.h>

#include<string.h>

int main(){

int a = 5;
   float b = 10;
int c;

int *p = &a;
float *q = &b;

c = p - q;

printf("%d" , c);

return 0;

}
