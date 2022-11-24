/*
=======================================================================================================================================
15. Write a program in C to replace 2ndline from the file.
content of the file abc.txt is:
line 1
line 2
line 3
line 4
After execution:
line 1
hello
line 3
line 4
=======================================================================================================================================
*/



#include<stdio.h>
#include<stdlib.h>

void main(){
	
	FILE *fp1,*fp2;
	int replaceLine, lineNo=1, i=0 ,flag = 1;
	char arr[20], ch;
	
	fp1=fopen("Replaced.txt","r");
	fp2=fopen("temp2.txt","w+");
	
	if(fp1 == NULL || fp2 ==NULL){
		printf("Failed to open file!!!!1\n");
		exit(1);
	}
	else{
	
		//print the content of original file
		printf("print the original contents\n");
		while( ( ch = fgetc(fp1) ) !=EOF)
			printf("%c",ch);

		printf("Enter the line number ro be replaced: ");
		scanf("%d",&replaceLine);
		//fflush(stdin);
	
		printf("Enter the word : ");
		scanf(" %s",arr);
	

		fseek(fp1,0,0);				//set to start of file
	
	
		while( (ch=fgetc(fp1)) !=EOF){
		
			//for number of lines
			if(lineNo == replaceLine && arr[i] != '\0'){
					
					if(lineNo == replaceLine && flag == 1){
						fprintf(fp2,"\n");
						flag = 0;
					}//end if
					fputc(arr[i],fp2);
					i++;

			}//end if


			if(ch=='\n'){
				lineNo++;
			}
			
			if(lineNo !=replaceLine)		//exclude the line which we have to deleted
				fputc(ch,fp2);
		
		}
		fclose(fp1);				//close the file	
	
	
	
			fp1=fopen("Replaced.txt","w+");		//open in write mode to write the updated content
			fseek(fp2,0,0);				//rewind to the start
	
	
			while( (ch=fgetc(fp2)) !=EOF)		//copy the updated contents
				fputc(ch,fp1);

			fseek(fp1,0,0);				//set to start pos

			//print the updated file	
			printf("print the updated contents\n");

			while( (ch=fgetc(fp1)) !=EOF)
				printf("%c",ch);
		}
}	

