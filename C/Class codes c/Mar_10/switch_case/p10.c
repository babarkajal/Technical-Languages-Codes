int printf(const char*,...);

void main() {
		int a=2;
		switch(a) {
				 case 1:
				//if any label found match then it will not check next label continue till the end of program
			
					printf("One\n");
					     
 				case 2: //case is matched here.exctute the all statements after it without checking any label
					printf("Two\n");
 				case 3:
					printf("Three\n");
 				case 4: 
					printf("Four\n");
				default:
					printf("Default\n");
					
		}
}


