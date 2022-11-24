int printf(const char*,...);

void main() {
	int i=10;
	int j=20;
	int a;
        int b;
	printf("Before increment: \n");
	printf("a= %d\n",a);//Garbage
	printf("b= %d\n",b);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);
 	
	a= i++ + ++i; //a=10+12 i=12
	b= j++ + ++j; //b=20+22  j=22

	printf("After increment: \n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);

}

/* a= i(++) + i++   
    = 10(++ pending) + ++i  ; i=10
    = 10 + ++11   	    ; i=11
   a =10+12
   a=22 			; i=12

 '++' is pending operation but at a time only one operation is pending .On second time when we are again accessing i value then 
the pending  work should be clear
*/  
