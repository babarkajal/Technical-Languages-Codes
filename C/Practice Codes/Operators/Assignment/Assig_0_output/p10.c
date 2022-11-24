#include <stdio.h>

void main() {
    int num1 = 1, num2 = 3, num3 =0;
    num3 = num2 << num1;
    //        = 8
    num2 = num3*num2*(++num1);
    /*        = 8 * 2 * 2
              =32*/
    printf("num1 = %d\n num2 = %d\n num3 = %d\n", num1, num2,num3);
}
