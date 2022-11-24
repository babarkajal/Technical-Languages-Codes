//Constant string literal


int printf(const char*,...);

void main(){
		//constant string
		const char  *ptr="kajal";
		
		char *cptr;

		printf("%c\n",*ptr);	//k
 		
		//Assignment
		cptr=ptr;
		printf("%c\n",*cptr);	//k
	
		*cptr='B';		//core dump
		printf("%c\n",*ptr);
}
