//Constant string literal


int printf(const char*,...);

void main(){
		//string and poinetr constant
		const char  * const ptr="kajal";

		printf("%c\n",*ptr);	//k

		//we cannot change the string bcoz it const
		*ptr='B';
		printf("%c\n",*ptr);
}
