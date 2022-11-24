int printf(const char*,...);

void main() {
		char ch='A';
		switch(ch) {
				 case 'b':
			               printf("One\n");
					     
 				case 'A': //takes ascii value A=65
					printf("Two\n");
 				case 10:
					printf("Three\n");
 				case 65: //error 
					printf("Four\n");
				default:
					printf("Default\n");
					
		}
}

//error: dublicate case value
//  case 65:
//  ^
