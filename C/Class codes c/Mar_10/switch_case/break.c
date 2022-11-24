int printf(const char*,...);

void main() {
		int a=1;
		switch(a) {
				case 1://label matched here
					printf("One\n");
					break;     
				//Due to break statement it will excute only the label which found match to the condition
				//and stop the switch statement
 				case 2: 
					printf("Two\n");
					break;     
 				case 3:
					printf("Three\n");
					break;     
 				case 5:
					printf("Five\n");
					break;     
 				case 6:  
					printf("Six\n");
					break;     
				default:
					printf("Default\n");
					break;     
					
		}
}



