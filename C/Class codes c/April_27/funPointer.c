int printf(const char*, ...);
int scanf(const char*, ...);

int fact( int n){
	int fact=1;
	for(int i=n; i>0 ;i--)
		fact =fact*i;

return fact;
}



void main(){
	
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);

	printf("fuction call by name\n");
//calling function by using name
	int f= fact(n);
	printf("factorial =%d\n",f);

// function pointer 
//ptr is a pointer which points to the function having int parameter and returntype int
	int (*ptr)(int);
	ptr=fact;


	printf("fuction call by pointer\n");
//calling function by pointer name
	 f=ptr(n);
	printf("factorial =%d\n",f);
	
		
}
