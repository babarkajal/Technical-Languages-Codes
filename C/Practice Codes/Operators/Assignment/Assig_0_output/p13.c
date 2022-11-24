#include <stdio.h>

void main() {
    int x =2 , y=12;
    int ans = 0;
    ans= x++ / y-- + x++ * y++ + y-- * x--;
    /*
        = x / 12 +  x++ * y++ + y-- * x--; // x = 3 , y = 11
        = x / 12 +  3   * 11  + y-- * x--;  // x = 4 , y = 12
        = x / 12 + 3    * 11  + 12  * 4;    // x = 3 , y = 11
        = 3 / 12 + 3 * 11 +12 *4
        = 0 + 33 + 48
        = 81
    */
    printf("Ans = %d\n", ans);
}
