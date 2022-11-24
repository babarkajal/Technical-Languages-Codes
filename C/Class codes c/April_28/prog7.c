//Constant string literal


int printf(const char*,...);

void main(){
		
		 char  * ptr="kajal";

		printf("%c\n",*ptr);	//k
 
		*ptr='B';		//Not accessible only one char-core dump
		printf("%c\n",*ptr);
}
