/*Program 6. Write a Program To Print Following Pattern. {Note: Take rows input from
user}
Input: Enter Number of Rows: 5
Output:


*/

#include <stdio.h>

void main() {
     int N = printf("Enter row: ");
     scanf("%d",&N);
     int middle = N-1 ,  stop =middle;
     //for row

     for(int row=0; row < N; row++) {
         //for column
         for(int col = 0; col <= stop; col++) {

              //for space
              if(row+col < middle) {
                  printf("\t");
              }
              //actual pattern
              else {
                    //print row*2 if col is even and print row*col when col is odd
                    if(col%2==0) {
                        printf("%d\t", row*2);
                    }
                    else {
                      printf("%d\t", row*col);
                    }
              }
         }
         stop++;
         printf("\n");
     }
}
