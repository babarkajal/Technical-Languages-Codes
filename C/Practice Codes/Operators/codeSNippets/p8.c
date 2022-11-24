
#include<stdio.h>
void main(){
        int a = 20;
        double b = 15.6;
        int c;
        c = a + b;
        printf("%d", c);
}
/*
    A. 35
    B. 36
    C. 35.6
    D. 30
*/


/*      Ans : A
        a  = 20      //type: int
        b = 15.6    // type double
        c = (garbage)   // type: int
        c = a+b
          = 20 + 15.6     //addition of two double or float values is always double value
          = 35.6
        c =  35           // but we are storing it in int type variable so it will truncate the mantisa i.e digits after (.) and value is implicitly converted to the int

*/
