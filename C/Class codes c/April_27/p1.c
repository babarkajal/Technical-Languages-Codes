
//passing each elememt one by one to the fun

int printf(const char*,...);
int scanf(const char*,...);

int mult=1;
void fun(int a){
		
	mult *=a;
} 




void main(){
	
	int arr[10],n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
//take elements	
	for(int i=0; i<n ;i++){
		
			scanf("%d",&arr[i]);
	}

	for(int i=0; i<n; i++){
		
	//passign every element to the function	
			fun(arr[i]);
	}

	printf("Multiplication is: %d\n",mult);
}
