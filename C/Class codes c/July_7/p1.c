//read form one file and write into another file


#include <stdio.h>
void main(){
	FILE *fp1,*fp2;
	char ch;
	
	fp1=fopen("Demo.txt","r");	//open in read mode
	
	fp2=fopen("demoCopy.txt","w"); 	//open in write mode
		
	if(fp1==NULL || fp2==NULL)
		printf("unable to open file\n");
	else{
		while( (ch=fgetc(fp1)) != EOF){
			fputc(ch,fp2);
		}
	}
}
	
