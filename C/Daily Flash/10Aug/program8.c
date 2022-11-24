
#include <stdio.h>

void main() {
        int N,stop;
        //var to print char
        char ch='A';
        printf("Enter row number: ");
        scanf("%d",&N);

        //calculate stop where to stop
        stop = (N*2)-1;
        
        //for row
        for(int row = 0; row<N; row++) {
            //for space
            for(int space =0; space < row; space++ )
                printf("   ");
            //for pattern
            for(int pattern = 0; pattern < stop; pattern++ ) {
                if(row%2==0) {
                    printf("%c  ", ch);
                    ch++;
                }
                else
                    printf("=  ");

            }
            stop-=2;
          printf("\n");
        }

}
