/*Program 2: .Write a C Program to print the character is vowel or consonant from ‘A’
to ‘Z’. Take the lower bound & upper bound of characters range from user.*/

#include<stdio.h>

void main()  {

	char lBound,uBound; 	//type char
				//intial value garbage

	printf("Lower Bound of Range: ");
	scanf(" %c",&lBound);			//get character value from user and stored in variable lBound
	printf("Upper Bound of Range: ");
	scanf(" %c",&uBound);
	
	/* here we have to interate from lower bound to upper bound so condition will be like this */
	while(lBound<=uBound)  {

		if(lBound=='A' || lBound=='E' || lBound=='I' || lBound=='O' || lBound=='U'
		   		|| lBound=='a' || lBound=='e' || lBound=='i' || lBound=='o' || lBound=='u')
			//here we check the condition for vowel if user enter char "A,E,I,O,U, or a,e,i,o,u"
			//then condition will be true and execute the if statement.

			printf("%c is vowel\n",lBound);

		else	//whene if statement false then else will be executed.
			
			printf("%c is consonant\n",lBound);
		
		lBound++;
	}
}
