int printf(const char* ,...);

int main() {

	register int  i=10;
	printf("i = %d\n",i);
	printf("Address of i %p\n",&i); //error
/*
  error: address of register variable ‘i’ requested
  printf("Address of i %p\n",&i); //error
*/
}
