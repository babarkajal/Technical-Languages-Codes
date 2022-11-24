int printf(const char *, ...);
void main() {
float arr[] = {3.14, 4.12, 7.6};
float *ptr1 = arr + 1;
float *ptr2 = &arr + 1;

printf("%p\n",arr);
printf("%p\n",ptr1);
printf("%p\n",ptr2);

if(ptr1 == ptr2)
printf("success! \n");}
