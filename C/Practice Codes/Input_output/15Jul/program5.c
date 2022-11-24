/*
Program 5: Write a C Program that accept minutes as input from user and display the
total number of hours and minutes.
Input: 452
Output: 7 Hours, 32 Minutes.
*/

#include <stdio.h>

void main()  {
           //variable: minutes, hrs
           //type: int
           //initial value: garbage Value
           //declared to store minutes and hours
           int minutes , hrs;

           //take minutes from user
           printf("Enter minutes: \n");

           //test case
          do {
              scanf("%d",&minutes);

              if(minutes < 0)
                printf("Minutes value should be positive\nEnter again: ");
          }while(minutes < 0);

          //calculate hrs and minutes
           hrs = minutes/60;
           minutes = minutes%60;
           //print it
           printf("%d Hours, %d Minutes\n", hrs, minutes);
}
