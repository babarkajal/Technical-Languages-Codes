//Invalid assignment  operation

int printf(const char*,...);

void main(){
		int val=10;
		int *iptr;
		double *dptr;

		
		printf("value is %d\n",val); //10
		printf("value of iptr: %p\n",iptr);
		printf("value by dereferncing iptr: %d\n",*iptr); //garbage

		printf("value of dptr: %p\n",dptr);
		printf("value by dereferncing dptr: %d\n",*dptr); //garbage

		printf("Size of iptr= %d\n",sizeof( *iptr)); //size of datatype of pointer
		printf("Size of dptr= %d\n",sizeof( *dptr)); //size o datatype of pointer
}
	
		
		
		

