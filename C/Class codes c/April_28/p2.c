int printf(const char*,...);


void main(){
		int a[5]={1,2,3,4,5};
		int *iptr1= a;
		
		//for pointing to the whole array use pointer to array
		int (*iptr2)[5]= &a;
		
		printf("iptr1= %p \t iptr2 =%p\n",iptr1,iptr2);//100 100
		printf("*iptr1= %d\t *iptr2= %d\n",*iptr1,**iptr2);
		
		/*iptr hold the base address
			iptr=&a
			*iptr=base address
			**iptr=*(base address)
			      = *(100)=100
			      =address of first element	
	*/		
		iptr1 +=1;
		iptr2++;
		
		printf("iptr1= %p \t iptr2= %p \n",iptr1,iptr2);//104
		printf("*iptr1= %d\t *iptr= %d \n",*iptr1, **iptr2);//120

}
		
