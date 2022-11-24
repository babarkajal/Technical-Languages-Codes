/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 17: Write a program in C to read data from file and store all numbers into array. Finally, Print that array. File should have all the numbers only.
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	FILE *fp=fopen("number.txt","r");
	char arr[20];
	int i=0;
	char ch;
	if(fp==NULL){
		printf("File is not opened\n");
		exit(1);
	}
	else{
		while((ch=fgetc(fp)) != EOF){
			arr[i++]=ch;
		}
	}
	
	printf("Array contents are\n");
	for(int olc=0; olc<i; olc++)
		printf("%c",arr[olc]);
}
			
