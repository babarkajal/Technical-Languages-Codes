/*Question 16. Write a Program that detects whether the entered character is UPPER CASE,
lower case or a Special Character.
Input: *
Output: * is a Special Character.
*/

#include <stdio.h>

void main() {
      char ch;
      printf("Enter character: ");
      scanf("%c",&ch);
      //upper case : ascii range 65 - 90 or use letters 'A' to 'Z'
      if (65 <= ch && ch <= 90) {       // 'A'<=ch or ch <= 'Z'
          printf(" '%c' is upper case letter\n",ch);
      }

      //lower case ascii range 97-122
      else if(97 <= ch && ch <= 122)
            printf("'%c' is lower case letter\n",ch);

      //Special character : 32-47, 58-64, 91-96,123-126
      else if( (32<=ch && ch <=47) || (58<=ch && ch <=64) || (91<=ch && ch <=96) || (123<=ch && ch <=126) ) {
          printf(" '%c' is Special character\n",ch);
        }
}
