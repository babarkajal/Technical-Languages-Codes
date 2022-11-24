int printf(const char *,...);

//Global varibles
int a=100;
float b=12.12;

void main() {
	int a=200;					//Local varible
	float b=22.22;
	printf("\n -----Inside main function---- \n");
	printf("\n a=%d, b=%.3f\n",a,b);
	fun();
}
/* It displays the value of a and b which are local to the main.*/

void fun() {
	printf("-----Inside Fun function-----\n");
	printf("a= %d,b= %f\n",a,b);
}


/* It displays the value of a and b which are globally declared.*/

