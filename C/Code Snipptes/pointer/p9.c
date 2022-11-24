#include <stdio.h>
int main()
{
    char    *str="Core2Web";
    printf("%c\n",*&*str);		//c
    printf("%p\n",str);			//address 
    printf("%c\n",*str);		//c 
    printf("%p\n",&*str);		//address
    printf("%d\n",*&*str);		//C
    return 0;
}
