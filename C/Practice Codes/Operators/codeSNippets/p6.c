#include<stdio.h>
void main(){

        int x = 7 % 4 * 3 / 2;
        printf("Value of x is %d", x);
}
/*
    A. Value of x is 1
    B. Value of x is 2
    C. Value of x is 4
    D. Compile time error
*/

/*  
    Ans : Value of X is 4
    x = 7 % 4 * 3 /2
     Operators used:
          %, * and /
          all three have same priority
          so the expression will be calculated as  per associvity i.e left to right

      = 3 * 3 / 2
      = 9 /2
      = 4
*/
