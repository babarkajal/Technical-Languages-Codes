int printf(const char*,...);

void main() {
		int a=5;
		int b=10;
		switch(a > b) { //the comparison exp return the value 0 bcoz it is false
				 
				case 1: //match found here
					printf("One\n");
					     
 				case 2: 
					printf("Two\n");
 				case 3:
					printf("Three\n");
 				case 4:
					printf("Four\n");
 				case 5:  
					printf("five\n");
				case 0:
					printf("zero\n");
				default:
					printf("Default\n");
					
		}
}



//expression ,varible allow in switch condition
