extern int  printf(const char *,...);   //printf prototyne

int a;    	 //varible defination
extern int b; 	//varible declaration

extern void main() {
		int c;
		extern int d;
		printf("%d\n",a);
		printf("%d\n",b);
		printf("%d\n",c);
		printf("%d\n",d);
}

