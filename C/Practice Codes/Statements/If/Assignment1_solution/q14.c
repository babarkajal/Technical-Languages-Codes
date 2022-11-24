/*Question 14. Write a Program to check whether the number N Entered by ranges between
25 to 50, Print the appropriate statements.
Input: 15
Output: 15 Doesn’t belong in the range of 25 to 50.
*/

#include <stdio.h>

void main() {
    int N;
    printf("Enter number: ");
    scanf("%d",&N);

    //check whether N is between 25 and 50
    if(25<= N  && N <=50)
          printf("%d belong in the range of 25 to 50\n",N);
    else
        printf("%d Doesn’t belong in the range of 25 to 50\n",N);

}
