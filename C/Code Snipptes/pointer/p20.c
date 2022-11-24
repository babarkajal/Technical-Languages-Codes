#include <stdio.h>
int main()
{
    int     iVal;
    char    cVal;
    void    *ptr;   // void pointer
    iVal=50; cVal=65;

    ptr=&iVal;
    printf("value =%d,size= %d\n",*(int*)ptr,sizeof(ptr));

    ptr=&cVal;
    printf("value =%d,size= %d\n",*(char*)ptr,sizeof(ptr));
    return 0;
}
