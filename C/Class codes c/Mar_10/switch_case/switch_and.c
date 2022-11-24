int printf(const char*,...);

void main() {
		int a=5;
		int b=10;
		switch(a && b) { //the boolean exp return the value 1
				 
				case 1: //match found here
					printf("One\n");
					     
 				case 2: 
					printf("Two\n");
 				case 3:
					printf("Three\n");
 				case 5:
					printf("Five\n");
 				case 6:  
					printf("Six\n");
				default:
					printf("Default\n");
					
		}
}



//expression ,varible allow in switch condition
