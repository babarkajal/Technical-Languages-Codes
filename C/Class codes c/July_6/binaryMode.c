//binary mode

#include <stdio.h>

void main(){
	FILE *fp=fopen("binary.bin","rb");
	char ch;
	if(fp==NULL){
		printf("Uable to open a file\n");
	}
	else{
		while((ch=fgetc(fp) !=EOF))
			printf("%d",ch);
	}
}
	
