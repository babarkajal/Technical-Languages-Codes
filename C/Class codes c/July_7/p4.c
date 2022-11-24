//fclose function

#include<stdio.h>
void main(){
	int x,y;
	printf("press 1\n");
	scanf("%d",&x);

	fclose(stdin);//this close the input stream
	printf("press 2\n");
	scanf("%d",&y);//this will not executed
	
}
