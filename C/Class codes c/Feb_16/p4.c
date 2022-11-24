int printf(const char*,...);


void main() {
		int a=10,20,30,40,50;     //error
		int b=(10,20,30,40,50); 
		int c={10,20,30,40,50};
		printf("a= %d",a);
		printf("b= %d\n",b);
		printf("c= %d\n",c);

}
