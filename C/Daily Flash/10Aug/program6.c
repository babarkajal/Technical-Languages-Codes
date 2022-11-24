/*Program 6. Write a Program To Print Following Pattern. {Note: Take rows input from
user}
Input: Enter Number of Rows: 5
Output:

0 1 4  9 16
  2 6 12 20
    8 15 24
      18 28
         32
*/

//use  num = (col*col) + (row*col)
#include <stdio.h>
void main() {
          int N = printf("Enter row: ");
          scanf("%d",&N);

          //for row
          for(int row=0; row <N; row++) {
              //for column
              for(int col=0; col < N; col++) {
                  if(col < row)
                      printf("\t");
                  else
                      printf("%d\t", (col*col) + (row*col));
              }
              printf("\n");
          }
}
