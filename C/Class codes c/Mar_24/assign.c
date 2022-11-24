//Referncing and derefencing operation

int printf(const char*,...);

void main(){
		int val=10;
		int *iptr= val; //assign value

		
		printf("value is %d\n",val); //10
		printf("value of iptr: %p\n",iptr);// 0xa
		printf("value by dereferncing iptr: %d\n",*iptr); //core dump due to accesssing the address which is not available

/*Deferencing:
		*iptr => *(add) => valueAt(address)
*/



}
	
		
		
		

