

int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int num1,num2;
		printf("Enter the two values: ");
		scanf("%2d %5d",&num1,&num2);//50 12345
		printf("Num1=%d\nNum2=%d\n",num1,num2);
}
/*
  %wd :w is the field width  of the number to be read 
  
 If input: 12345.
 it assigns 12 to the num1 bcoz width is 2
 and remaining part is assigned to the num2
*/

