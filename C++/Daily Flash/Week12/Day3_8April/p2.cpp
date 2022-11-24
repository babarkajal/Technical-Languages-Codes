/*
 * Program 2: Write a Program that accepts a String from user, finds & prints if
that consists of a substring asked by user.
Input: Enter String: yellow
Enter Substring to find low
Output: the entered string consists low as substring
*/

#include <iostream>
#include <string.h>

//--------------------------- Substring function ------------------------------------------
bool substring(char *str , char* sub) {
	int i=0,count =0, j=0;
	
	while(str[j]!='\0') {
			//if letter of substring and main string found match then inc count
			if(sub[i] == str[j]){
				count++;
			}
			else {
				count = 0;
				i = -1;
			}
			i++;
			j++;
			if(count == strlen(sub)-1)
				return true;
	}
	return false;

}
//------------------------------------------------------------------------------------------

int main() {
	char str[30],substr[30];
	std::cout << "Enter input string: ";
	fgets(str,30,stdin);
	std::cout <<"Enter substring found: ";
	fgets(substr,30,stdin);

	
	if (substring(str,substr)) {
		std::cout << "The entered string consist " << substr << " as substring" << std::endl;
	}
	else
		std::cout << "Substring not found!!" << std::endl;
	return 0;
}
