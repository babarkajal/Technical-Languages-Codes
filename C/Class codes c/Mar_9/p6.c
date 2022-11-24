int printf(const char*,...);

void main() {	
		int a,b;
		a=10,b=20;
		
		if( a++ != 10 || ++b) {			
				printf("Hello\n");
		}
	printf("a= %d\n",a);//11
	printf("b= %d\n\n",b);//21

}


/*-------------------------------------------------------------------------------------------------------------------------------

 In OR operator, if  one of the statement is true then the equ is true.
If the first statement is false then check the next one.

Here a++ != 10 is false next is true

---------------------------------------------------------------------------------------------------------------------------------
*/
