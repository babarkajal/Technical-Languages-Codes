//access *fp 

#include <stdio.h>

void main(){
	FILE *fp;
	fp=fopen("/home/kajal/Desktop/kajal.txt","r");

	printf("*fp= %c\n",*fp);//garbage
}
