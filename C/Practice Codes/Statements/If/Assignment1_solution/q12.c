//program to check divisiblity of number  by 2,3 &5
//condition for divisible by 5: if the number is divisible by 2 and 3 then it is divisible by 5
#include <stdio.h>
void main() {
          int num=120;

          //first check divisiblity by 2

          if(num%2 ==0)
          // 120 %2 == 0
          // 0 == 0
          //true        --yes divisible by 2 execute if block
          {
                printf("%d is divisible by 2",num);

                //check divisiblity by 3
                if(num%3 == 0)
                //120 % 3 ==0
                // 0 ===0
                //true     --yes divisible by 3 execute if block
                {
                    printf("%d is divisible by 3",num);

                    //check divisiblity by 5
                    if(num%5==0)
                    //120 % 5==0
                    //0==0
                    //true  --yes divisible by 5 execute if block
                    {
                          printf("%d is divisible by 5",num);
                    }else {
                          printf("%d is not divisible by 5",num);
                      }
                }else{
                    printf("%d is not divisible by 3",num);
                  }
        }
        else{
          printf("%d is not divisible by 2",num);
        }
}
