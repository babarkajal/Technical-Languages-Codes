/*Write a program to take 3*3 2D matrix from user and check whether given matrix in identity matrix or not
 *
 * input:
 * 1	0	0
 * 0	1	0
 * 0	0	1
 *
 * Output: Given matrix is Identity matrix
 */

#include <stdio.h>

void main() {
	//declare 2D array of size 3*3
        int arr[3][3];

	//take elements into an array from user
        printf("Enter array elements: ");

	//for loop for rows
        for(int outer=0 ; outer < 3; outer++) {
                //for loop for columns
		for(int inner =0; inner< 3; inner++) {
                        scanf("%d", &arr[outer][inner]); 	//&arr[0][0] , &arr[0][1], etc
                }
        }

	//print the entered matrix
        printf("Entered 2D array means matrix is\n" );
        for(int outer=0 ; outer < 3; outer++) {
                for(int inner =0; inner< 3; inner++) {
                        printf("%d\t",arr[outer][inner]);
                }
                printf("\n");
        }


	//set flag to 1
        int flag = 1;

	/*loop to check the array is an identity or not
	 * for identity matrix condition is that all diagonal elements should be 1 and all non-diagonal elements should be 0\
	 */
        for(int outer=0 ; outer < 3; outer++) {
                for(int inner =0; inner< 3; inner++) {

			//condition to check diagonal element is 1 or  not. if not then set flag to 0 and break the loop
			if((outer==inner) && arr[outer][inner] != 1) {
                                flag = 0;
                                break;
                        }

			//condition to check non-diagonal element is 0 or not. if not then set flag to 0 and break the loop
                        else if( (outer!=inner) && arr[outer][inner] != 0) {
                                flag = 0;
                                break;
                        }
                }
        }

	//if flag is 1 then matrix is identity matrix
        if(flag)
                printf("\nEntered matrix is an Identity matrix\n");
        else
                printf("\nEntered matrix is not an Identity\n");


}//end of main
