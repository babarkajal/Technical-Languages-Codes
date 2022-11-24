//reading string from user
//Using scanf();

int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
	char name[12];
	printf("Enter the string: ");
	scanf("%s",name);//& is not required bcoz array name is itself a address
	
	printf("Entered string: %s\n",name);
}

/* scanf reads only the characters upto space */
