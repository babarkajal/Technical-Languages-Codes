//Character array

int printf(const char*,...);
void main(){
		
	//by using string literal
	char a[6]="hello";
	printf("%s\n",a); //hello
	
	//by using initilization list
	char b[6] = {'k','a','j','a','l','\0'};
	printf("%s\n",b); //kajal
	
}
