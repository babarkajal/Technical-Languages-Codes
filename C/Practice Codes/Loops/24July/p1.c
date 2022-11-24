/*
       A
     B C
   C D E
 D E F G
E F G H I
*/

#include <stdio.h>
void main() {
    //delcare a vari to store the rows
    int row;

    //char var to print char
    char ch ;
    //take rows from user
    printf("Enter rows: ");
    scanf("%d",&row );

    //for rows
    for(int outer = 0;outer < row ; outer++) {
        //initilize the ch for the first char
        ch = 65+outer;
        //starting for rows
        //1. A  2.A+1  3.A+2 and so on

        //for space
        for(int space=row-1; space > outer;space-- ){
            printf("  ");
        }
        //for pattern
        for(int inner = 0; inner <= outer; inner++) {
          printf("%c ",ch);
          ch++;         //inc the var to we want incremented character on each line
        }
        printf("\n");
    }
}
