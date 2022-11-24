/*
        E
      D E
    C D E
  B C D E
A B C D E
*/
#include <stdio.h>
void main() {
    //delcare a var to store the rows
    int row;
    //declare char
    char ch;
    //take rows from user
    printf("Enter rows: ");
    scanf("%d",&row );

    //for rows
    for(int outer = 0;outer < row ; outer++) {
        ch = 65;
        //for space
        for(int space=row-1; space > outer;space-- ){
            printf("   ");
            ch++;
        }
        //for pattern
        for(int inner = 0; inner <= outer; inner++) {
                printf("%c  ",ch);
                ch++;
        }
        printf("\n");
    }
}
