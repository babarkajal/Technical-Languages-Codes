int printf(const char*,...);

void main() {
		int a=1;
		switch(a) {
				case 1://label matched here
					printf("One\n");     
				
 				case 2: 
					printf("Two\n");
   
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
//print upto it will not find the break statement 


