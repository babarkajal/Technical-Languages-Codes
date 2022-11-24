int printf(const char*,...);

void main(){
		
	int arr[5]={1,2,3,4,5};

	for(int i=0 ; i<5 ;i++){
		
		if(i%2==0){
			printf("%d\n",*arr+i);//access by using pointer
		}
	}
}
