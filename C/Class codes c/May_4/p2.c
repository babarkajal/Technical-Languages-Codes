//reading string from user
//Using scanf() and escape sequence

int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
	char name[12];
	printf("Enter the string: ");
	scanf("%[^\n]",name);//& is not required bcoz array name is itself a address

	//escape seq read the char upto \n

	printf("Entered string: %s\n",name);
}

//escape seq read only upto specific char
