/*Program 2: Write a Program to Convert entered Binary Number to Octal
Number
Input: Binary Number: 1011
Output: Octal Number: 13
*
*
* ---------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
//power function
int power(int base , int exp) {
	int pow = 1;
	for(int lc=1; lc<=exp; lc++)
		pow = pow*base;
	return pow;
}

//main function
void main() {

	//step 1
	int binNo;
	printf("Enter binary num: ");
	scanf("%d", &binNo);

	printf("input : %d\n", binNo);
	
	//step 2
	int mod, revNo=0;
	int temp = binNo;

	int count=0, octalThree  = 0;
	int arr[20], exp = 0, len = 0,decimal = 0;

	while(temp != 0) {
		mod = temp % 10;
		//multiply by power of 2 
		decimal += mod * power(2,exp);
		count++;
		exp++;
		if(count == 3) {
			arr[len] = decimal;
			//printf("Decimal = %d\n",decimal);
			len++;
			decimal = 0;
			count= 0 , exp=0;
		}
		temp /= 10;
	}

	printf("Octal num: ");
	for(int i=len-1; i >=0;i--) {
		printf("%d",arr[i]);		
	}
	printf("\n");
}	
