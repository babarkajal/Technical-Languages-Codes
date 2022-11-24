
#include<stdio.h>
void main(){
        int i = 5;
        int num1 = i / -4;
        int num2 = i % -4;
        printf("%d %d\n", num1, num2);

}
/*
    A. Compile time error
    B. -1  1
    C. 1  -1
    D. Run time error
*/
/* Ans = C
   /(Divide) operator:
          1. if divisor < 0 and divident > 0 then ans is negtive
            e.g 5/-4 = -1
          2. if divident < 0 and divisor > 0 then ans is negative
            e.g. -5 /4 = -1
          3. if divident < 0 and divident < 0 then ans is negative
            e.g -5 / -4  = 1
          4. if divindet > 0 and divident > 0 then ans  is positive
            e.g 5 /4 =1

  %(Mod) operator:
         1. if divisor < 0 and divident > 0 then ans is negtive
           e.g 5%-4 = 1
         2. if divident < 0 and divisor > 0 then ans is negative
           e.g. -5 %4 = -1
         3. if divident < 0 and divident < 0 then ans is negative
           e.g -5 % -4  = 1
         4. if divindet > 0 and divident > 0 then ans  is positive
           e.g 5 % 4 =1
*/
