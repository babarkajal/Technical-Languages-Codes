int printf(const char*,...);

void main() {
		int a=5;
		switch(a) {
				 case ++a://error
					printf("One\n");
					     
 				case 2: 
					printf("Two\n");
 				case 3:
					printf("Three\n");
 				case 6:  
					printf("Four\n");
				default:
					printf("Default\n");
					
		}
}

//error: case label does not reduce to an integer constant.
//  case a:
//  ^

//label value require only integer and character (constants),not  varible 
