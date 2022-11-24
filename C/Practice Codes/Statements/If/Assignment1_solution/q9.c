#include <stdio.h>

void main() {
      //type:int
      //number = 10
      int number=10;

      if(number!=0 && number>0)
      //= (10 != 0) && number > 0
      //= true && 10 > 0
      //= true && true
      //= true
      {
            printf("%d is a positive no",number);
            number=-5;                                     //number = -5
      }

      if(number<0 )
      // -5 < 0
      //true
      {
          printf("%d is a negtive no",number);
          number=0;                                      //number = 0
      }
       if(number==0)
       //0 == 0
       // true
       {
          printf("number is zero");
          number=15;                                    //number = 15
       }
       if(number%4==0);
       //15%4 == 0
       //false
       //but this if has no block

       //this is an independet block and it will always executed
       {
          printf("%d is divisible by 4",number);     
       }
  }
