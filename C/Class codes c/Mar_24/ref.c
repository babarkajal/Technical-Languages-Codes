//Referncing and derefencing operation

int printf(const char*,...);

void main(){
		int val=10;
		int *iptr=&val;//Referencing operation
/* can be written as
	1.int *iptr=NULL;
   	2. iptr=&val
*/

		printf("Size of varible: %d\n",sizeof(val));
		printf("Size of pointer: %d\n",sizeof(iptr));
		
		printf("value is %d\n",val); //10

		printf("value by dereferncing iptr: %d\n",*iptr); //Dereferncing operation gives the value

/*Deferencing:
		*iptr => *(add) => valueAt(address)
*/


		printf("value of iptr: %p\n",iptr);//add of val
}
	
		
		
		

