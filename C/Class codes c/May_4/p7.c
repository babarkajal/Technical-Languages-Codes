//print the string by  printf() function without using a format specifier

//Prototype of printf() 
int printf(const char*,...);

void main(){
	char str[10]="Reader!!";
	char *ptr="Dear";
	
	//print
	printf("Hello");
	printf(ptr);
	printf(str);
}

