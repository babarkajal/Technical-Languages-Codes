int printf(const char*,...);


void main(){
		int a[2][2]={1,2,3,4};
		int *iptr1= a;
		int *iptr2= &a;
		
		printf("%p \t %p\n",iptr1,iptr2);//100
		printf("%d\t%d\n",*iptr1,*iptr2);//100
		
		iptr1++;
		iptr2++;
		
		printf("%p \t %p\n",iptr1,iptr2);//104
		printf("%d\t%d\n",*iptr1,*iptr2);//120

}
		
