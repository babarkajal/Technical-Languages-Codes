int printf(const char*,...);

void main() {
		int a=5;
		switch(a++) {
				 case 1:
					printf("One\n");
					     
 				case 2: 
					printf("Two\n");
 				case 3:
					printf("Three\n");
 				case 5://matched here postfix so it return value 5 and then increment
					printf("Five\n");
 				case 6:  
					printf("Six\n");
				default:
					printf("Default\n");
					
		}
}



//expression ,varible aloow in switch condition
