/*Program 2: Write a C Program to take character from user and print whether it's in
upper case or in lower case.
Input: A
Output: Entered character is UPPERCASE character
*/


#include <stdio.h>

void main()  {
         //ch
         //type: char
         //initial value: garbage Value
         //declared to store a character
        char ch;
        printf("Enter character: ");
        scanf("%c",&ch);



        //character have some ascii range
        //Upparcase range is 65-90
        //lowercase range is 97-122

        //if entered character is between 65-90 then it is Upparcase letter
        if(65<=ch && ch <= 90)
            printf("%c is Uppercase letter\n",ch);

        //also we can check the character range
        else if('a' <= ch && ch <='z')
            printf("%c is lowercase letter\n",ch);

        else
          printf("Oops! you have enetered wrong value\n");
}
