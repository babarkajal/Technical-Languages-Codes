//print the string by  printf() function with using a format specifier

//Prototype of printf() 
int printf(const char*,...);

void main(){
	char str[10]="Reader!!";
	char *ptr="Dear";
	
	//printf not provide next line char implicitly
	printf("%s","Strings by using format specifier\n");
	printf("%s","Hello");
	printf("%s",ptr);
	printf("%s",str);
}

