/*
          25
      16  25
    9 16  25
  4 9 16  25
1 4 9 16  25
*/

#include <stdio.h>
void main() {
    //delcare a vari to store the rows
    int row;
    //declare var to print square
    int var;

    //take rows from user
    printf("Enter rows: ");
    scanf("%d",&row );

    //for rows
    for(int outer = 0;outer < row ; outer++) {

        var = 1;
        //for space
        for(int space=row-1; space > outer;space-- ){
            printf("   ");
            var++;
        }
        //for pattern
        for(int inner = 0; inner <= outer; inner++) {
              printf("%d  ",var*var);
              var++;
        }
        printf("\n");

    }
}
