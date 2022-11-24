/*Question 8. Try out following code snippet & explain the output.
int year=2020;
if(year%4==0 && year%100 != 0 || year %400 ==0 ){
printf("%d year is leap year");
}
*/

#include <stdio.h>

/*This program is used to check whether given year is leap year or not */

void main() {
      int year = 2020;
      /* for leap year conditions are
          1.year must be divisible  by 4 and not divisible by 100 e.g. 1900 is divisible by 4 but it is divisible by 100 also so its is not
            considered as leap year
            year%4==0 && year%100 != 0 is for first conditions. both conditions must be true thats why and operator is used
          2.Year must be divisible by 400
            year %400 ==0

          these two expressions are connected by or (||) operator because any one of this is true then the year is leap year otherwise not.
      */
      if( (year%4==0 && year%100 != 0) || year %400 ==0 ){
                  printf("%d year is leap year");
      }

}
