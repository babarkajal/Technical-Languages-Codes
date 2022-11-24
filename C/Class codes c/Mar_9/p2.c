int printf(const char*,...);

void main() {	
		int a,b;
		a=10,b=20;
		
		if( a++ || ++b) {			
				printf("Hello\n");
		}
		if( --b && a--) {			
				printf("Hii\n");
		}
	printf("a= %d\n",a);//10
	printf("b= %d\n\n",b);//19

}


/*-----------------------------------------------OR Operator---------------------------------------------------------------------

 In OR operator, if  one of the statement is true then the equ is true.
If the first statement is true then there is no need to ceck the another statement.

if(a++ || ++b)  in these statements the first is true  therefore the value will be incremented  i.e =>  a=[11]

and value of b remains constant.

-------------------------------------------------------------------------------------------------------------------------------*/


/*------------------------------------------------And operator-------------------------------------------------------------------

   In And operator ,if first statement is false then there is no need to check for next one.
 If any of value is false then the whole statement is false,but if first value is true then the next statement must be tested.

-------------------------------------------------------------------------------------------------------------------------------*/





