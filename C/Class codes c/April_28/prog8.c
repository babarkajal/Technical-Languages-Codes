//Constant string literal


int printf(const char*,...);

void main(){
		//constant string
		const char  *ptr="kajal";
		
		const char *cptr;

		printf("%c\n",*ptr);	//k
 		
		//Assignment
		cptr=ptr;
		printf("%c\n",*cptr);	//k
	
		*cptr='B';		//trying to change the const string-error
		printf("%c\n",*ptr);
}
