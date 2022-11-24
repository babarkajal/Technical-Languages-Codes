//Character array

int printf(const char*,...);
void main(){
		
	//by using string literal
	char a[6]="hello";
	printf("%s\n",a); //hello
	
	//by using initilization list

	const char b[6] = {'k','a','j','a','l','\0'};	//constant array
	printf("%s\n",b); //kajal

	//we can change the string 
	printf("changed first string:  ");	
	*(a+1)='B';
	printf("%s\n",a);//hBllo
	

//we cannot change the constants
	
/*	printf("changed second string :  ");	
	*(b+1)='B';	//error
	printf("%s\n",b);//hello
	
*/	
}
