//Pointer to pointer assignment operation

int printf(const char*,...);

void main(){
		int age=132;
		int *iptr= &age;
		
		char ch='a';
		char  *cptr= &ch;

		
		printf("Befor assignment\n");
		printf("value of iptr: %d\n",*iptr); //10
		printf("value of cptr: %d\n",*cptr); //97
		

		cptr=iptr;

		printf("\nAfter assignment\n");
		printf("value of iptr: %d\n",*iptr); //132
		printf("value of cptr: %d\n",*cptr); //-124
		 

		
}
	
		
		
		

