//Assignment operation on pointer

int printf(const char*,...);

void main(){
		char ch= 'z';
		int *iptr= ch; //assign value
	
		float f=10.5f;
		float *fptr=&f;
		
		printf("f = %f\n",f); //10.500000
		printf("value of iptr: %p\n",iptr);// 122
		printf("value by dereferncing iptr: %f\n",*fptr); 

		printf("ch = %c\n",ch); 	// z
		printf("value of iptr: %p\n",iptr);// 122
		printf("value by dereferncing iptr: %d\n",*iptr); //core dump due to accesssing the address which is not available







}
	
		
		
		

