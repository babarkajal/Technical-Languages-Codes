#include <stdio.h>

void main() {
    int x =3,y=4;
    int ans = x++ + y++;
    /*      = 3(return temp) + 4(return temp) = 7
            
    */
    printf("Ans = %d\n", ans);

}
