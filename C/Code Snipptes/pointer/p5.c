#include<stdio.h>

int main(){

int i = 100;

printf("value of i : %d addresss of i : %u",i,&i);

i++;

printf("\nvalue of i : %d addresss of i : %u",i,&i);

return 0;

}
