/*Program 3: Write a Program That Take Input Integer From User, And Print First And Last Digit From That Entered Number Using While Loop.
Input: Enter Number: 83467
Output:
First Number: 8
Last Number: 7
*/

#include <stdio.h>

void main(void) {
      //declare a variable and take Integer value from user
      int num;
      printf("Enter Number: ");
      scanf("%d",&num);
      int copy = num;
      //declare variable
      int first , last;

      //we can extract last digit
      last = num%10;                //% operator will gives us the last digit
      //this operations works as
      // last = num%10 = 83467%10
      //               = 7

      //to take first digit reduce the number
      //divide the number by 10 and store the reminder into first variable
      while(num!=0) {
            first = num%10;
            /* following are values for every iteration
               1. num = 83467 first = 7
               2. num = 8346  first = 6
               3. num = 834   first = 4
               4. num = 83    first = 3
               5. num = 8     first = 8
               6. num = 0    here the while condition executed to false
             */
               num/=10;
      }
      printf("First digit from num %d is %d\n",copy ,first);
      printf("Last digit from num %d is %d\n",copy ,last);

}
