#include<stdio.h>
void main(){
int data = 10;
int *address = &data;
printf("data is %d. and address is %d\n", *address, address);
*address = ++*address + 5;
printf("data is %d \n",data);
}
