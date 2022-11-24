#include <stdio.h>

void main() {
    int x = 10, y=20;
    int ans=0;
    ans = x++ || ++y; // 10 || 21 = 1
    printf("ans = %d\n", ans);      //1

    ans = --y && x--;   //20 && 11  = 1
    printf("ans %d\n", ans);

    ans = (x++ || ++y )&& (++x && ++ y);    //(10 || 21) &&(11 && 22) = 1 && 1 = 1
    printf("Ans %d\n",ans );
    
    
}
