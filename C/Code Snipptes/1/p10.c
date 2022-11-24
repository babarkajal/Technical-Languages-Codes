#include<stdio.h>
void main(){
int val = 10;
const int *ptr = &val;
printf("%d\n", *ptr++);
}
