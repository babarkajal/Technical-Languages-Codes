#include<stdio.h>

void main(){
	char ch;
	
	printf("Enter character: ");
	scanf("%c",&ch);
	
	while((ch <'A' || ch >'Z') && (ch <'a' || ch > 'z')){
		printf("\nInvalid character entered!!!!\nTry again\n");
		printf("Enter character: ");
		scanf(" %c",&ch);
	}
			
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			printf("%c is a vowel\n\n",ch);

	else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			printf("%c is a vowel\n\n",ch);
	else
		printf("%c is a consonant\n\n",ch);
}
