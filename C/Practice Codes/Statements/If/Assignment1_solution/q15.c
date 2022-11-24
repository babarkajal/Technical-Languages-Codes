/*
Question 15. Write a Program that check whether the entered character by user is vowel or
Consonant.
Input: A
Output: A is Vowel.
*/

#include <stdio.h>

void main() {
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    //there are five vowels - a,e,i,o,u
    //If user entered any one out of them then it should print ' .. is vowel'  means if only one condition
    // is true then expression should evaluated to true. here we want  conditional statement i.e if
    //use it .for Condition which operator ?? -->OR(||)
    if( ch == 'a' || ch=='e' || ch=='i' || ch =='o' || ch=='u')
        printf("%c is vowel\n",ch);

    else if( ch == 'A' || ch=='E' || ch=='I' || ch =='O' || ch=='U')
        printf("%c is vowel\n",ch);
    else
        printf("%c is Consonant\n",ch);

}
