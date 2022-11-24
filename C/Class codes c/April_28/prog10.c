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
		
		//address
		printf("ptr=%p\n",ptr);
		printf("cptr= %p\n",cptr);

		//increment	
		cptr++;	
		ptr++;
		
		
		printf("ptr=%c \ncptr= %c\n",*ptr,*cptr);// a a
		
		
		*cptr='R';		//core dump
		printf("%s\n",cptr);
}
