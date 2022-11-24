int printf(const char*,...);

void main() {
		int iarr[5];
		char carr[5];
		float farr[5];
		double darr[5];
		printf("-------------size of different array------------\n");
		printf("Datatype\tSize\n");
		printf("int\t\t %d\n",sizeof(iarr));
		printf("float\t\t %d\n",sizeof(farr));
		printf("char\t\t %d\n",sizeof(carr));
		printf("double\t\t %d\n",sizeof(darr));
		
}
