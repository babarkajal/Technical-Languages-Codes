//Constant string literal


int printf(const char*,...);

void main(){
		//string is constant not a pointer
		const char const *ptr="kajal";
		printf("%c\n",*ptr);
		//we can change the address
		ptr++;
		printf("%c\n",*ptr);
}
