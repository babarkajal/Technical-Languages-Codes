//Character array

int printf(const char*,...);
void main(){
		
	
	//by using initilization list

	const char b[6] = {'k','a','j','a','l','\0'};	//constant array
	printf("%s\n",b); //kajal

	

	//for changing the constant array
	char *ptr;
	ptr=b;
	ptr=ptr+2;	//pointing to the 'j'
	*ptr='K';
	
	printf("changed  string :  ");	
	printf("%s\n",b); //kaKal



	
//we cannot change the constants
	
/*	printf("changed second string :  ");	
	*(b+1)='B';	//error
	printf("%s\n",b);
	
*/	
}
