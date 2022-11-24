//Increment pointers


int printf(const char*,...);

void main() {
		int arr[3]={10,20,30};
		int *ptr;
		ptr=arr;
		printf("Pointer before increment: %d\n",*ptr); //10

		ptr= ++ ptr;
//		   =increment the pointr  and then assign
		printf("Pointere after increment: %d\n", *ptr);//20

		ptr=  ptr++;
		printf("Pointere after increment: %d\n",*ptr);//20
}

//error:Invalid operand to binary '+'
