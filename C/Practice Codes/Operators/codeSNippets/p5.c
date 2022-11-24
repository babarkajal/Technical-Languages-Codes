#include<stdio.h>
void main(){
        int x = 4.3 % 2;
        printf("Value of x is %d", x);
}
/*
    A. Value of x is 1.3
    B. Value of x is 2
    C. Value of x is 0.3
    D. Compile time error
*/
/*
      Ans :D
      Error: invalid operands to binary %(have double and int)
      We can not apply mod operator on float and double values
*/
