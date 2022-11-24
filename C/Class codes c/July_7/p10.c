//fgetpos in append mode

#include <stdio.h>
void main(){
	FILE *fp1;
	int loc1;
	
	fp1=fopen("appendDemo.txt","a"); 	//open in append mode
		
	if(fp1==NULL)
		printf("unable to open file\n");
	else{
		fgetpos(fp1,&loc1);
		printf("location=%d\n",loc1);
	}
	
	
}
	
