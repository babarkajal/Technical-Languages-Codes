int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int a,b;
		printf(" Enter two number: ");
		scanf("%d %d",&a,&b);
		if(a < b)
		 printf(" Minimum number= %d\n\n",a);
		else if(a > b)
		 printf(" minimum number= %d\n\n",b);
		else
		printf("Numbers are equal.\n\n");
}
