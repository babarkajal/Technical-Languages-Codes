#include<stdio.h>



int main()

{

    int i=3, *j, k;

    j = &i;
printf("%p\n",j);
printf("%d\n",i);
    i= *j++;
printf("%d\n",i);
printf("%p\n",j);
    //printf("%d\n", i**j*i+*j);

    return 0;

}
