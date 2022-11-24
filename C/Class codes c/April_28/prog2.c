//String as a pointer

int printf(const char*,...);


void main(){
		// string literal (" ") itself a pointer 
		printf("The first character of a strinng literal \"XYZ\" is %s\n", "XYZ");
		int  i="XYZ";
		printf("%s\n",i);		
		printf("The Second character of a string literal \"XYZ\" is %s\n", ("XYZ"+1) );

}
		
