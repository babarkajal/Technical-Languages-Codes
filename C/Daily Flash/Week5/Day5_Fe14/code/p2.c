/*Program 2: Write a Program to Convert entered Hexadecimal Number to
Binary Number.
Input: Hexadecimal Number: 5f
Output: Binary Number: 1011111
*/

#include <stdio.h>
#include <string.h>



int binary[20];

//fun to dec to Binary
int decToBin(int decimal) {

	int rem ,len = 0;
	
	while(decimal != 1) {
		rem = decimal %2;
		binary[len++] = rem;
		decimal /=2;
	}

	//access this len in the main function
	binary[len] = decimal;
	return len;
}

//calculate the power
int power(int num,int exp) {
	int result = 1;
	while(exp--) 
		result = result*num;

	return result;
}

//fun to convert hex to Binary 
int hexToDec(char* hex) {

	/*decimal = to store the decimal value after conversion
	 * temp = to store digit
	 */
	  int decimal=0, temp,var=0;
	
	/*traverse the string upto the \0 
	 * The string contain the data in ascii format convert it into dec
	 * if the ascii in range 48-57 then sub 48 from it
	 * and if ascii in range 65-70 then sub 55 from it get  equivalent decimal from it
	 * after getting dec for each digit multipy it by power of 16 
	 */


	//calculate the length of string
	int len = strlen(hex);

	for(int i=len-1; i >= 0; i--) {
		temp = (int)hex[i];
		if(temp >=48 && temp<=57) 
			temp = temp - 48;
		
		else if( temp >=65 && temp <= 70) 
			temp = temp - 55;
		decimal =  decimal + temp * power(16,var);
		
		//increment exponent
		var ++;
	}


	//return  decimal
	return decimal;

}


void main() {
	char hex[20];
	printf("Enter hex num: ");
	scanf("%s",hex);

	int decimal = hexToDec(hex); 
	//printf("%d\n",decimal);
	int length;
	
	length = decToBin(decimal);

	printf("Binary conversion: ");
	for(int lc = length; lc>=0; lc--) 
		printf("%d", binary[lc]);

	printf("\n");
}

