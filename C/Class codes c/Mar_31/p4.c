int printf(const char*,...);


void main(){
		int  arr[5]={1,2,3,4,5 };
		int *iptr1= arr;//address of 1st ele
		
		//pointer to an array
		int (*iptr2)[5]= &arr;//base address of array
		printf("Addresses of both pointers:\n%p\n%p\n",iptr1, iptr2);
		printf("Data:%d\t%d\n",*iptr1,**iptr2);
		iptr1++;
		iptr2++;
		printf("Addresses of both pointers:\n%p\n%p\n",iptr1, iptr2);
		
}	
		
