int printf(const char*,...);

void main() {
	int a=11;
	int ans;
	ans = a++  - ++a;
/*	    =11-13=-2
	    
*/
	printf("a=%d\n",a);//13
	printf("ans=%d\n",ans);
}
