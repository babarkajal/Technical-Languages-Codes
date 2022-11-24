#include<stdio.h>

void main(){
	char ch='Z';
	while(ch>='A'){
		if(ch!='A' && ch!='E'&& ch!='I' && ch!='O' && ch!='U')
			printf("%c\t",ch);
		ch--;
	}
	printf("\n");
}
