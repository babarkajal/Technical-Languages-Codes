
int printf(const char*,...);

//global defination of varible
int a=10;
int b;    	

void main() {
		//local varible to function main()
		int c=30; 
		int d; 
		fun();
		
}


void fun() {
		//local varible to function fun()
		int e=40;
		printf("Values from function fun(): \n");
		printf("a= %d\n",a);
		printf("b= %d\n",b);
		printf("e= %d\n",e);
		gun();
}



void gun() {
		//local varible to function gun()
		printf("Values from function gun(): \n");
	 	float f=54.5;
		char ch= 'D';
		printf("a= %d\n",a);
		printf("b= %d\n",b);
		printf("f= %f\n",f);
		printf("ch= %c\n",ch);

}

	
		
