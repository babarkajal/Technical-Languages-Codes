int printf(const char*,...);

void main() {
		int a=1;
		switch(a) {
			     case 1://if any label found match then it will not check next label continue till the end of program
			
					printf("One\n");
					printf("Two\n");//All statements bind to the closed label in switch, but in 'if' only one
							// statement binds to it if there is no { }.

				default:
					printf("Default\n");
					printf("Kajal\n");
		}
}


