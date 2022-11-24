int printf(const char*,...);

void main(){
		int arr[3]={1,2,3};
		int a[3][3]={ {1,2,5} };

		printf("Elemnets in 1-D array: \n");
		printf("%d %d %d\n",arr[0],arr[1],arr[2]);//1,2,3
		
		printf("%d %d %d\n",*(arr+0),*(arr+1),*(arr+2));//1,2,3

// *(arr+0)= *(address + 0*sizeof(DTP))
//	   = valueAt(address)
		printf("Elemnets in 2-D array: \n");
		printf("%d %d %d\n",a[0][0],a[0][1],a[0][2]);
		
		printf("%d %d %d\n",*(*(a+0)+0) , *(*(a+0)+1) , *(*(a+0)+2));

/*	a[0][1]	= *(a+0)+1
		= *( *(a + 0*sizeof(whole 1D array) + 1*sizeof(DTP) );

*/
}
