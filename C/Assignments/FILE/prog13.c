/*
=======================================================================================================================================
Program 13: Write a program in C to delete a specific line from the file .The content of the file abc.txt is :
line 1
line 2
line 3
line 4
Test Data :Input the file name to be opened : abc.txtInput the line you want to remove :
2Expected Output:
The content of the file abc.txt is :
line 1
line 3
line 4
=======================================================================================================================================
*/



#include<stdio.h>
#include<stdlib.h>

void main(){
	FILE *fp1,*fp2;
	char ch; 
	int delLine,lineNo=1;
	
	fp1=fopen("Original.txt","r");
	fp2=fopen("temp.txt","w+");
	
	printf("print the original contents\n");
	//print the content of original file
	while( (ch=fgetc(fp1)) !=EOF)
		printf("%c",ch);

	printf("Enter the line number ro be deleted: ");
	scanf("%d",&delLine);
	
	fseek(fp1,0,0);				//set to start of file
	
	while( (ch=fgetc(fp1)) !=EOF){
		
		//for number of lines
		if(ch=='\n')
			lineNo++;
		
		if(lineNo !=delLine)		//exclude the line which we have to deleted
			fputc(ch,fp2);
	}
	fclose(fp1);				//close the file	
	
	fp1=fopen("Original.txt","w+");		//open in write mode to write the updated content
	fseek(fp2,0,0);				//rewind to the start
	
	
	while( (ch=fgetc(fp2)) !=EOF)		//copy the updated contents
		fputc(ch,fp1);

	fseek(fp1,0,0);				//set to start pos

	//print the updated file	
	printf("print the updated contents\n");

	while( (ch=fgetc(fp1)) !=EOF)
		printf("%c",ch);
}	

