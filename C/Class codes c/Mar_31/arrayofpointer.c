int printf(const char*,...);

void main(){
		int a=10,b=20,c=30,d=40;
		int *aptr=&a;
		int *bptr=&b;
		int *cptr=&c;
		int *dptr=&d;

		int *arr1[4]={&a,&b,&c,&d};
//arr1 is an array of 4 inter pointers and points to the a,b,c,d 
		printf("%d\n",*arr1[0]);
		printf("%d\n",*arr1[1]);
		printf("%d\n",*arr1[2]);
		printf("%d\n",*arr1[3]);
		
		
		int  *arr2[4]={ aptr,bptr,cptr,dptr};
		printf("\n%d\n",*arr2[0]);
		printf("%d\n",*arr2[1]);
		printf("%d\n",*arr2[2]);
		printf("%d\n",*arr2[3]);
}


