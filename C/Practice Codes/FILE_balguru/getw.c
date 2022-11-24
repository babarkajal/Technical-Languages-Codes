//getw() function :-used to get the integer 
//putw() :- write into file

#include <stdio.h>
#include <stdlib.h>
void main(){
	FILE *fp1,*fp2;
	int c;
	fp1=fopen("getw.txt","r");
	fp2=fopen("getwCopy.txt","w");
	
	if(fp1==NULL || fp2==NULL){
		printf("Uable to open a file\n");
		exit(1);
	}
	else{
		int c=getw(fp1);
		printf("%d\n",c);
		putw(c,fp2);
	}
}
