/*
 * Program 2: Write a Program that accepts a String from user then finds and
prints the word with maximum length from that string.
Input: heaven is just an illusion made by weak hearts
Output: The Word with maximum length from the entered string is: illusion
*
*/

#include <iostream>
#include <cstring>

//---------------------------------------------------------------------------
char* maxString(char* str) {
	char* maxString,*temp;
	int maxLen = 0;
	char ch;
	for(int i=0; *(str+i)!='\0';i++) {
		ch = *(str+i);
		std::cout << ch << "\n";
		if ( ch==' ' || ch=='\t' || ch=='\n'){
			if (strlen(temp) > maxLen ){
				maxLen = strlen(temp);
				maxString = temp;
			}
			temp = '' ;
		}
		else {
			strcat(temp,&ch);
		}
		
	}
	if (strlen(temp) > strlen(maxString)) 
		maxString = temp;
	return maxString;
	
}

//---------------------------------------------------------------------------
int main() {
	char str[30];
	std::cout << "Enter input string: ";
	fgets(str,30,stdin);

	std::cout << "Maximum string from the entered string: "<< maxString(str) << std::endl;
}
