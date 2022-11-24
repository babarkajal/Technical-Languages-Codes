/*
         1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1
*/

#include <stdio.h>
void main() {
    //delcare a vari to store the rows
    int row,var;

    //take rows from user
    printf("Enter rows: ");
    scanf("%d",&row );

    //for rows
    for(int outer = 0;outer < row ; outer++) {
        var = outer+1;
        //for space
        for(int space=row-1; space > outer;space-- ){
            printf("   ");
        }
        //for pattern
        for(int inner = 0; inner <= outer; inner++) {
                printf("%d  ",var--);
        }
        printf("\n");
    }
}
