//Accept array of char and print the toggle case of characters by using pointer
#include<stdio.h>

void main(){
	char arr[30];
	int vCount=0,cCount=0;

	printf("Enter characters(only 10): ");
	//accept the characher array
	for(int i=0; i<10 ;i++){
			scanf("%c",arr+i);
			
			//check is vowel or consonant
			if( *(arr+i)=='a' ||*(arr+i)=='e' || *(arr+i)=='i' || *(arr+i)=='o' ||  *(arr+i)=='u')
				vCount++;	//inc vowel count

			else if( *(arr+i)=='A' ||*(arr+i)=='E' || *(arr+i)=='I' || *(arr+i)=='O' ||  *(arr+i)=='U')
				vCount++;	//inc vowel count
				
			else
				cCount++;
			
	}
	printf("\nvowel count=  %d\n",vCount);
	printf("\nconsonant count=  %d\n",cCount);

}
