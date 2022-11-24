int printf(const char*,...);


void main(){
		
		
		int a[10]={1,2,3,4,5,6,7,8,9,10};
			
		printf("size=%d\t%d\n",sizeof(a),sizeof(&a));//40 4

		printf("%p\t%p\n",a,&a);//100 100
		printf("%d\n",*a);//1
		 
		printf("%p\t%p\n",a+1,&a+1);
		printf("%d\n",*a);//1
}
