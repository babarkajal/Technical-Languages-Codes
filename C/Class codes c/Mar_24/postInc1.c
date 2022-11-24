int printf(const char*,...);


void main(){
		int val=10;
		int *iptr=&val;
		
		printf("%d\n",*iptr++); //10
 //     ++ has higher precedance than the * pointer.
//	postinc on pointer same works as a postincrement ++,it returns temp value.
		
		printf("%d\n",*iptr);//Garbage 
}
