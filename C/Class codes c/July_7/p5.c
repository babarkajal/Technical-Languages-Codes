//fcloseall() function
#define _GNU_SOURCE
#include <stdio.h>

void main(){
	FILE *fp1=fopen("appendDemo.txt","r");
	FILE *fp2=fopen("Demo.txt","r");
	
	int i=fcloseall();//close all the file stream which are opened except std streams
	printf("%d\n",i);
}
