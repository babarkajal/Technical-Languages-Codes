//String as a pointer

int printf(const char*,...);


void main(){
		// string literal (" ") itself a pointer 
		printf("The first character of a strinng literal \"XYZ\" is %c\n", *"XYZ");
		
		printf("The Second character of a string literal \"XYZ\" is %c\n", *("XYZ"+1) );
}
		
