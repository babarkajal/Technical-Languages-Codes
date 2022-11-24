#include<stdio.h>

int main()
{
    static char *s[] = {"black", "white", "pink", "violet"};
    char **ptr[] = {s+3, s+2, s+1, s}, ***p;
    printf("%p\n",*ptr);
    printf("%p\n",*ptr+1);
    printf("%s\n",*ptr[0]);
    p = ptr;
    printf("0- %p\n",p[0]);
    ++p;
    printf("0 -%p\n",p[0]);
    printf("%s", **p+1);
    return 0;
}

