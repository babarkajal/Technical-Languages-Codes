/*8. Write a program to print alphabets in reverse order between y to j
      Ip -> y  j

      Op -> y x w v u … j
      */

#include<stdio.h>

void main()  {

	char ch1,ch2;
	//take two character variable to store two characters
	printf("Enter character to print reverse order: ");
	do {
			scanf(" %c %c",&ch1,&ch2);

			if(ch1 < ch2)
					printf("Please enter first character greater than second to print the series in reverse order\nEnter again\n");
	}while(ch1 < ch2);

	printf("reverse order\n");
	//traverse from ch1  to ch2 to print in reverse order
	for(char i=ch1;i>=ch2;i--)  {

		printf("%c\n",i);
	}
}
