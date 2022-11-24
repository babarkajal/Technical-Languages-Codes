/*
Program 3: What does the following C statement mean write detailed explanation?
scanf("%7s", str);
*/

#include <stdio.h>

void main()  {
      char str[20];
      //str variable
      //type: array of characters
      //declared to store a string
      printf("Enter string: ");

      scanf("%7s",str);
      /*  this line is used to take input form user
          %ws : This format specifier is used to indicate a string
          here w means width of characterd.specifies the number of
          character to be read from terminal if user entered string
          e.g if user entered "Helloworld" string
          then it will scan only 7 characters i.e. Hellowo

      */
      printf("Entered string: %s\n",str);
  }
