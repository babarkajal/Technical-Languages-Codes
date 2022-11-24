int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int num1,num2;
		printf("Enter the two values: ");
		scanf("%d&%d",&num1,&num2);//125&145
		
		printf(" Num1=%d\n Num2=%d\n",num1,num2);
}
/*
we can use any kind of symbol or charachter in between two format specifiers,
but scanf expect the matching symbol which is present between them.
If it is not matched then it does not read next input 
 
 If input: 125&145

 it assigns  num1=125
	     num2= 145
           

 
*/

