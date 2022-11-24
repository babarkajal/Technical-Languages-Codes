#include<stdio.h>
void main() {
const int arr[5] = {1,2,3,4,5};
int *ptr;
ptr = arr+3;
*ptr = 10;
printf("%d\n",arr[3]);
}
