/*
        0
      0 1
    0 1 0
  0 1 0 1
0 1 0 1 0
*/

#include <stdio.h>
void main() {
    //delcare a vari to store the rows
    int row;
    int flag =1;

    //take rows from user
    printf("Enter rows: ");
    scanf("%d",&row );

    //for rows
    for(int outer = 0;outer < row ; outer++) {
        //set flag to one
        flag = 1;
        //for space
        for(int space=row-1; space > outer;space-- ){
            printf("  ");
        }
        //for pattern
        for(int inner = 0; inner <= outer; inner++) {
              //to print alternative
              flag ? printf("0 ") : printf("1 ");
              if(flag)
                  flag =0;
              else
                  flag =1;
        }
        printf("\n");
    }
}
