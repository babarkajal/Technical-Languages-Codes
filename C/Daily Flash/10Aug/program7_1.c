#include <stdio.h>

void main() {
     int N = printf("Enter row: ");
     scanf("%d",&N);
     int var;

     for(int row=0; row < N; row++) {
          var = 0;
         //for space
         for(int j = 4; j > row ; j--) {
              printf("\t");
              var++;
         }
         //for Pattern
         for(int col =0; col < row*2+1; col++) {
              if(col%2 != 0 && row%2 != 0) {
                  printf("%d\t",row*2);
              }
              else if(row%2 == 0 && col%2==0 ) {
                   printf("%d\t",row*2);
              }
              else {
                printf("%d\t",row*var);
              }
              var++;
        }
        printf("\n");
      }
 }
