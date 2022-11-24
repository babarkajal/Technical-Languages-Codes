#include<stdio.h>

int main()
{
    int arr[3] = {2, 3, 4};
    char *p;
    p = arr;

    printf("%p\n ", arr);
    p = ((int*)(p));	
    printf("%d\n", *p);
    printf("%p\n ", p);
    p = (int*)(p+1);
    printf("%d\n", *p);
    printf("%p\n", p);
    return 0;
}
