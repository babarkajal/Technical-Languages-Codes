int printf(const char*,...);

void main() {
	int b=30;
	int ans;
	ans = ++b + b++ + ++b; 
/*	    = b+31
	    =32+31+33=96	 
*/
	
	printf("b=%d\n",b);
	printf("ans=%d\n",ans);
}
