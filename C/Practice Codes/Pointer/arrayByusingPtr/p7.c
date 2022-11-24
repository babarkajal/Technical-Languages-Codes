//Accept array of char and print the toggle case of characters by using pointer
#include<stdio.h>

void main(){
	char arr[30];
	printf("Enter the stirng: ");
	scanf("%s",arr);//accept the string

	for(int i=0 ; *(arr+i)!='\0' ;i++ ){
		
		if('A'<= *(arr+i) && *(arr+i) <='Z')
				*(arr+i) +=32;
		
		else if('a'<= *(arr+i) && *(arr+i) <='z')
				*(arr+i) -=32;
		else
			*(arr+i) = *(arr+i); 
	}
	printf("\nToGGoleD array is:  %s\n",arr);

}
