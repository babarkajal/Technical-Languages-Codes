int printf(const char*,...);
int scanf(const char*,...);


void main() {
		int num1;
		int num2;
		printf("Enter the first number: ");
		scanf("%d",&num1);
		printf("Enter the second number: ");
		scanf("%d",&num2);
		

		void subtract(int num1 ,int num2){       //function defination
				printf(" Subtraction:\n ");
				printf("%d - %d = %d\n\n",num1,num2,num1-num2);

		} //end of add

	subtract(num1,num2);//function call
}//end of main
