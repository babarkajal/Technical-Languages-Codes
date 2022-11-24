/*Program 5. Write a Program To Print Following Pattern. {Note: Take Rows Input From
User.}
Input: Enter Number of Rows: 4
Output:
0
1 1
2 3 5
8 13 21 34
*/

#include <stdio.h>

void main() {
          //given pattern is a Series of fibonacci number
          //take row from User
          int N;
          printf("Enter number of rows: ");
          scanf("%d",&N);

          int sum = 0, num1 = 0,num2 = 1;
          for(int row =0; row< N; row++) {
              for(int col=0; col < row+1; col++) {
                   printf("%d\t",num1);
                   sum = num1+num2;
                   num1 = num2;
                   num2 = sum;
              }
              printf("\n");
          }

}
