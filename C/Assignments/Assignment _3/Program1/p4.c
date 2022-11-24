int printf(const char*,...);

void main() {
	int a=4;
	int b=15;
	int ans;
	ans = ++b + ++a +b++;
/*	    =16+5+16 
	    =37
*/
	printf("a=%d\n",a);//5
	printf("b=%d\n",b);//17
	printf("ans=%d\n",ans);
}
