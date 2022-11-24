#include <stdio.h>
int main()
{
    char    *str="Core2Web";
    printf("%c\n",*&*str);
    return 0;
}


