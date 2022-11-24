
int _fileno(FILE *stream);
//_fileno : 

#include<stdio.h>
void main(){
	
	FILE *fp=fopen("Demo.txt","r");
	printf("File number is %d\n",fp->_fileno);
	printf("File number is %d\n",stdin->_fileno);
	printf("File number is %d\n",stdout->_fileno);
	printf("File number is %d\n",stderr->_fileno);
	printf("%d\n",_fileno(stdin));
}

