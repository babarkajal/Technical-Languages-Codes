/*
 * Program 2: Write a Program to Convert entered Hexadecimal Number to
Decimal Number.
Input: Decimal Number: 25
Output: Decimal Number: 37
*
*/

#include <stdio.h>
#include <string.h>


//calculate the power
int power(int num,int exp) {
	int result = 1;
	while(exp--) 
		result = result*num;

	return result;
}

//fun to convert hex to dec
int hexToDec(char* hex) {

	/*decimal = to store the decimal value after conversion
	 * temp =to store digit
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
		//printf("%d",hex[i]);

		temp = (int)hex[i];
		if(temp >=48 && temp<=57) 
			temp = temp - 48;
		
		else if( temp >=65 && temp <= 70) 
			temp = temp - 55;
		decimal =  decimal + temp * power(16,var);
		//increment exponent
		var++;

	}
	//return the decimal	
	return decimal;

}


void main() {
	char hex[10];
	printf("Enter hex num: ");
	scanf("%s",hex);
	//printf("%s",hex);
	//to store the decimal num 
	int decimal; 
	
	//fun ptr
	int(*decFunPtr)(char*);
	decFunPtr = hexToDec;
	decimal = decFunPtr(hex);

	printf("Decimal conversion of hex num %s: %d\n",hex,decimal);

}
