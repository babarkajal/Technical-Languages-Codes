int printf(const char*,...);

void main() {
	int i=10;
	int j=20;
	int a;

	printf("Before increment: \n");
	printf("a= %d\n",a);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);
 	
	a= ++i + ++j;//preincrement 
/* work as follow:
 j=j+1 ,i=i+1
 a=i+j
*/
	printf("After increment: \n");
	printf("a= %d\n",a);
	printf("i= %d\n",i);
	printf("j= %d\n",j);

}
