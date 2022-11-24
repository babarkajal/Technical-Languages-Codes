int printf(const char*,...);

void main() {
	int a=11;
	int b=30;
	int ans;
	ans = a++ + ++b - b++ + ++a; 
/*	    =11+b 
	    =11+31-31 + 13=24
*/
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("ans=%d\n",ans);
}
