/*Program 10. Write a Program to check Whether the Entered Number is Perfect Number or Not until User not exit. If User Enters 'N' Then Exit The Loop.
Enter Number: 6
Output:
6 is perfect Number
Do you want to Continue? 'Y'
Enter Number: 12
Output :
12 is not perfect Number
Do you want to continue ? 'N'
Exit The Loop.
{Note:
Perfect Number: The Sum of Divisor Of Entered Number Is Equal To That
Number.
6: 1 + 2 + 3 = 6
6 == 6, perfect number}
*/
#include <stdio.h>

int isPerfect(int num) {
      int sumOfDiv = 0, div = 1;
      while(div<=num/2) {
            if(num%div==0)
              sumOfDiv += div;
            div++;
      }
      if(num == sumOfDiv)
        return 1;
      else
        return 0;
}

void main() {
       int num;
       char ch='y';
       do {
           printf("Enter num to check whether it is perfect or not: ");
           scanf("%d", &num);
           if(isPerfect(num))
               printf("Yes, %d is perfect number\n", num);
           else
               printf("No, %d is not perfect number\n", num);

           printf("Want to chek more(press y/n): ");
           scanf(" %c",&ch);
       }while(ch=='y' || ch=='Y');
}
