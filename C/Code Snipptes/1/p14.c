#include<stdio.h>
void main() {
int arr[3] = {10,20,30};
char *ptr = arr;
int *iptr = arr;
for(int i=0; i<3; i++) {
printf("%d\n",*(ptr+i));
}
printf("\n");
for(int i=0; i<3; i++) {
printf("%d\n",*(iptr+i));
}
}
