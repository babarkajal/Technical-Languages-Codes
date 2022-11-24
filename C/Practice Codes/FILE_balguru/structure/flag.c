// flag :- 
#include<stdio.h>
void main(){
	FILE *fp=fopen("Demo.txt","r");
	printf("fp->flag= %d\n",fp->_flags);
	printf("stdin->flag= %d\n",stdin->_flags);
	printf("stdout->flag= %d\n",stdout->_flags);
	printf("stderr->flag= %d\n",stderr->_flags);
}
