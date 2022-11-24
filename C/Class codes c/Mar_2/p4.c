int printf(const char*,...);

void main() {
	int i=10;
	int j=20;
	int a;

	printf("Before increment: \n");
	printf("a= %d\n",a);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);
 	
	a= i++ + j++; 
/* work as follow:
1. a= i + j
 increment operation is pending.
2. i=i+1 & j=j+1
*/
	printf("After postincrement: \n");
	printf("a= %d\n",a);
	printf("i= %d\n",i);
	printf("j= %d\n",j);

}
