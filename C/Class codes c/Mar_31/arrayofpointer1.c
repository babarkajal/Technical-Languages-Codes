int printf(const char*,...);

void main(){
		char a='a',b='b',c='c',d='d';
		
		char *arr1[4]={&a,&b,&c,&d};
//arr1 is an array of 4 char pointers and points to the a,b,c,d 

		printf("%c\n",*arr1[0]);
		printf("%c\n",*arr1[1]);
		printf("%c\n",*arr1[2]);
		printf("%c\n",*arr1[3]);
}


