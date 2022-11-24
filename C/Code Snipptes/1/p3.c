#include<stdio.h>
void main() {
int val = 26;
int* ptr = &val;
if(ptr == &*ptr)
printf("Equals \n");
}
