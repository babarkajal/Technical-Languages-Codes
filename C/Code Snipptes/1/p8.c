#include<stdio.h>
void main(){
float a = 12,b = 8.3;
float *ptr = &a;
float *ptr1 = &b;
printf("%f\n",*ptr);
printf("%f\n",*ptr1);
a = ptr == ptr1;
printf("%f\n",*ptr);
printf("%f\n",*ptr1);
printf("%f\n",a);
}
