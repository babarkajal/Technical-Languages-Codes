//Size fo function pointer
int printf(const char*,...);

void main(){

//Array of function pointer	
		int (*arr[4])(int ,int);
//arr is array of pointer which stores add of function having 2 int parameters and returntype int

		printf("Size of Array of function pointer =%d \n",sizeof(arr));
}
