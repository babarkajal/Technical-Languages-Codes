#include<stdio.h>



int main()

{

    int x=30, *y, *z;

    y=&x; /* Assume address of x is 500 and integer is 4 byte size */

    z=y;
    printf("%p %p %p\n",&x, y,z);
    //*y++ = *z++;
    printf("*z++ = %d\n",*z++);
    printf("*y++ = %d\n",*y++);
    printf("%p %p %p\n",&x, y,z);
   
    x++;

    printf("x=%d, y=%p, z=%p\n", x, y, z);

    return 0;

}
