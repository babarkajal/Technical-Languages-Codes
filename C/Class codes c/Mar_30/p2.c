//Addition of pointer & pointer
//We can not add two pointers

int printf(const char*,...);

void main() {
		
		int *ptr1,*ptr2;
		int a=10,b=20;
		ptr1=&a;
		ptr2=&b;

		ptr1=ptr1 + ptr2;//error
		
		printf(" ptr1: %p\n", ptr1);
}

//error:Invalid operand to binary '+'
