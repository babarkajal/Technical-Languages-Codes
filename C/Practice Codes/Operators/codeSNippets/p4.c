#include<stdio.h>
void main(){
        int num = 4 * 5 / 2 + 9;

        printf("%d\n",num);
}
/*
    A. 6.75
    B. 1.85
    C. 19
    D. 3
*/

/*    Ans = C
      num = 4 * 5 / 2 + 9                 // there operator are used here. * , / and + . * and / have highest priority than +
          = 20 / 2 + 9                    // first * operation evaluated
          = 10 + 9                        // then /
          = 19                            // then +
*/
