#include<stdio.h>
void main(){
        int a = 5;
        int b = ++a + a++ + --a;
        printf("Value of b is %d", b);
}
/*
    A. Value of x is 16
    B. Value of x is 21
    C. Value of x is 19
    D. none of the above
*/


    /*
    Ans = C
    b = ++a + a++ + --a;                      // a = 5
     ++ has highest priority than + operator

      = a + a++ + --a                           // a = 6 return reference of it
      = a + temp + --a                          // a = 7 , temp = 6 , return temp
      = 7 + 6 + a                               // a = 6  , return reference
      = 7 + 6 + 6                               //then  addition will be done
      = 19
    */
