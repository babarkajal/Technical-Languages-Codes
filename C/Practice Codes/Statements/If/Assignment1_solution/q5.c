#include<stdio.h>

void main() {

    //type: float
     float x=5.2, y=10.5;
     if(x == 5.2)
     // x ==5.2
     // 5.2(float) == 5.2(double)
     // false
     // 5.2 , 17.8 etc constat literals are considered as double values
    // here we are comaparing float value with double.these values look same but internally represented differently
     {
       printf("x : %d\n",x);
     }

     if(y == 10.5);
     //if( y == 10.5)     though here value 10.5 is double but its last precisions are .50000000
    //                    so this two values 10.5 == 10.5 =>true
    //                    other than *.0 and *.5 are different values like 10.2 , 4.6 etc.
     {
       printf("y : %d\n",y);    //garbage value
     }
  }
