//Reading a string by using getchar() function

//prototype of fun
int printf(const char*,...);
int scanf(const char*,...);

//prototype of getchar() 
int getchar(void);

void main(){
	
	char str[50];
	char ch;
	printf("enter a stirng: ");
	int i=0;
	while((ch=getchar() ) !='\n'){

		//getchar() read  one  by one character from the terminal and assign to the array
		str[i++]=ch;
	}
	str[i]='\0';
	printf("Entered the string: %s\n",str);
}
