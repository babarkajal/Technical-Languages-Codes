#include<stdio.h>
void main(){
	
	FILE *fp=fopen("Demo.txt","r");
	printf("%c\n",(*fp).*_IO_read_ptr );
	printf("%c\n",fp ->*_IO_read_end);
}
	
