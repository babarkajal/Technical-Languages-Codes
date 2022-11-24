int printf(const char*,...);
int scanf(const char*,...);


void main() {
		float num1;
		float num2;
		printf("Enter the first number: ");
		scanf("%f",&num1);
		printf("Enter the second number: ");
		scanf("%f",&num2);
		

		void multiply(float num1 ,float num2){       //function defination
				printf(" Multiplication:\n ");
				printf(" %f * %f =%f\n\n",num1,num2,num1*num2);

		} //end of add

	multiply(num1 ,num2);//function call

}//end of main
