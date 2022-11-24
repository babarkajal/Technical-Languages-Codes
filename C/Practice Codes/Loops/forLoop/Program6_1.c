/*6. Write a c program to print characters from A to Z in upper case and in lower case
     Op -> A = a , B = b
     */

#include<stdio.h>

void main()   {


	char ch='A';

	for(int i=1;i<=26;i++)  {

		printf("%c = %c\n",ch,ch+32);
		ch++;

	}

}
