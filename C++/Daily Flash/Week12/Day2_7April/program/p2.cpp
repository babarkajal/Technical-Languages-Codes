/*Program 2: Write a Program that accepts a String from user, finds & prints any
occurrence of two consecutive vowels in that string.
Input: heaven
Output: the entered string contains occurrences of two consecutive vowels as:
ea
*/


#include <iostream>
#include <string.h>

//------------------------------------- isVowel() function ------------------------------
bool isVowel(char ch){
		if(ch == 'a' || ch =='e' ||  ch == 'i' || ch =='o' || ch =='u') {
				return true;
		}
		else if(ch == 'a' || ch =='e' ||  ch == 'i' || ch =='o' || ch =='u') {
				return true;
		}
		return false;

}
//---------------------------------------------------------------------------------------
int main() {
	
	char str[30],ch1,ch2;
	std::cout << "Enter input string: ";
	fgets(str,30,stdin);

	std::cout << "The entered string contain occurances of two consecutive vowels as: ";
	for(int i=0; i<strlen(str)-1; i++) {
			ch1 = *(str+i);
			ch2 = *(str+i+1);
			
			if( isVowel(ch1) && isVowel(ch2)) {
				std::cout << ch1 << ch2 << "\t";
			}

	}
	std::cout << std::endl;
	return 0;
}
