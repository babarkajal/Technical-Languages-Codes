//fet postion of the file by using the fgetpos and ftell

#include <stdio.h>

void main(){
	FILE *fp1,*fp2;
	char ch;
	long int loc1,loc2;
	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","a");
	
	if(fp1==NULL || fp2==NULL)
		printf("Unable to open a file\n");
	else{
		loc1=ftell(fp1);
		loc2=ftell(fp2);
		printf("Initially locations are : %ld \t %ld\n",loc1,loc2);
		
		ch=fgetc(fp1);	//read from the file1
		fputc('!',fp2);	//write into file2
		
		loc1=ftell(fp1);
		loc2=ftell(fp2);
		printf("After IO operations locations are : %ld \t %ld\n",loc1,loc2);
		
		ch=fgetc(fp1);	//read from the file1
		fputc('!',fp2);	//write into file2
		
		//get location
		fgetpos(fp1,&loc1);	
		fgetpos(fp2,&loc2);
		printf("After IO operations locations are : %d \t %d\n",loc1,loc2);
	}
}
