/*
Program 2: Write a Program that accepts a String from user, finds & prints if that entered sting is a palindrome string or not.
Input: Enter String: madam
Output: the entered string madam is a palindrome String.
*/

#include <iostream>
//------------- length function ---------------
int myStrLen(char* str) {
	int i=0;
	while(*(str+i) !='\0') 
		i++;
	return i-1;

}
//-------------------- palindrome for string --------
bool isPalindrome(char* str) {
	int len = myStrLen(str)-1;
	int middle = len/2 , pos=0;
	while(pos <= middle) {
		//campare starting from first letter and last letter 
		if(*(str+pos) != *(str+ (len-pos)))
			return false;
		pos++;
	}
	return true;
}

int main() {
        char str[30],substr[30];
	std::cout << "Enter input string: ";
	fgets(str,30,stdin);

	if (isPalindrome(str) ){
		std::cout << "Entered string is palindrome"<<std::endl;
	}
	else {
		std::cout << "Entered string is not palindrome"<<std::endl;

	}

    
}
