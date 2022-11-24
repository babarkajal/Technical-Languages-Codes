int printf(const char*,...);

void main(){
		int a1[3]={1,2,3};
		int a2[3]={4,5,6};
		int a3[3]={7,8,9};
		
		int *aptr[3]={a1,a2,a3};
		
		printf("%p  %p  %p\n",aptr[0],aptr[1],aptr[2]);
		printf("%p  %p  %p\n",*(aptr + 0), *(aptr+1) , *(aptr+2));//print address
		printf("%d  %d  %d\n",*(*(aptr + 0)) , *(*(aptr+1)) ,* (*(aptr+2)) );//print elements

}
		
