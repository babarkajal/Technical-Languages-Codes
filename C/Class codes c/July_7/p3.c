//fclose function
#include<stdio.h>
void main(){
	printf("Hello world\n");
	fclose(stdout);//this close the output stream
	printf("Hello world\n");//this will not be printed
}
