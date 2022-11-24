/* Write a program to take two arrays of type float and int and print those elements. Also print the address of  each element from an array. For printing, use only one pointer. first initlize it to firstarray and second time initlize it to &firstarray+1.
Note: take size and elements from user
*/

#include <stdio.h>

//entry function:  main
void main() {
        //take size of an array
        int n;
        printf("Enter array size: ");
        scanf("%d",&n);

        //declare two arrays one of type int and other of type float
        int arr1[n];
        float arr2[n];

        //take elements of arr1
        printf("Enter %d integer elements: ",n);
        for(int lc=0; lc<n; lc++) {
                scanf("%d", (arr1 + lc));               //arr1+0  , arr1+1 etc gives address of
                                                        //each location of an array
        }

        //take elements of arr2
        printf("Enter %d float elements: ",n);
        for(int lc=0; lc<n; lc++) {
                scanf("%d", (arr2 + lc));
        }

        

}
