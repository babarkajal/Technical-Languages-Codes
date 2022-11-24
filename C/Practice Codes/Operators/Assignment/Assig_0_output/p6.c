
#include <stdio.h>

void main() {
    int x =10,y=10;
    int ans = ++x + ++x /++y * x++ - y++;
    /*      = x + ++x / ++y * x++ - y++     //++x return reference and inc value x = 4
            = x + x / ++y * x++ - y++     //++x return reference and inc value x = 5
            = x + x / y * x++ - y++     //++y return reference and inc value y = 5
            = x + x/y * 5 - y++         // x++ returns value first and then inc x = 6
            = x + x/y * 5 - 5           //y++ returns value first and then inc y = 6
            = 6 + 6 / 6 * 5 - 5         // / and * have highest priority then + and -
            = 6+1*5 - 5
            = 6
    */
    printf("Ans = %d\n", ans);

}
