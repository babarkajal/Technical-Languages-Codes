int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int num1,num2,num3;
		printf("Enter the three values: ");
		scanf("%d %*d %d",&num1,&num2);//11 12 13
		
		printf("Num1=%d\nNum2=%d\nNum3=%d\n",num1,num2,num3);
}
/*
  %*d : '*' is used to skipped the the input
  
 If input: 11 12 13

 it assigns  num1= 11 
	     12 is skipped bcoz of '*'
	     num2= 13
             num3= 0 or Garbage

 
*/

