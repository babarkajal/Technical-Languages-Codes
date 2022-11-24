#include<stdio.h>
void main(){

        int a = 20, b = 15, c = 5;
        int d;
        d = a == (b + c);
        printf("%d", d);
}
/*
    A. 1
    B. 40
    C. 10
    D. 5
*/

/*
      Ans : 1
      expression d = a == (b+c)

      here bracket has high priority
      d = a == (15+5)
        = a == 20
        = 20 == 20        //comparision operator == : will evalutes to true if the both values are equal and return 1
        = 1

*/
