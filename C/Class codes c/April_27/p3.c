

//pass entire array to the fun by

int printf(const char*,...);
int scanf(const char*,...);

int mult=1;

//for taking Add we need a pointer
void fun(int *ptr , int n){
		
	for(int i=0; i<n; i++)
		mult = mult * (*ptr + i); 
} 




void main(){
	
	int arr[10],n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
//take elements	
	for(int i=0; i<n ;i++){
		
			scanf("%d",&arr[i]);
	}

//function call passing address of first element
			fun( arr,n);


	printf("Multiplication is: %d\n",mult);
}
