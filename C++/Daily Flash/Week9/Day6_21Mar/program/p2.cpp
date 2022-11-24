/*
 * Program 2: Write a Program that accepts a String from user. Print Only Vowels
from that String.
Input: HELLO WORLD
Output: Vowels in Entered String: O O
*
*/

#include <iostream>

class string {
	private: 
		char* sen;
		friend bool isVowel(string &ref);
	
	public:
		string(char* sen) {
			this->sen= sen;
		}

};


//friend function 
bool isVowel(string &ref) {
	char ch;
	for(int i=0; *(ref.sen+i)!='\0'; i++ ) {
		ch = *(ref.sen+i);
		if (ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
		       std::cout << ch << "  ";
		else if (ch =='A' || ch =='E' || ch =='I'|| ch =='O' || ch=='U')
		       std::cout << ch << "  ";

	}
	std::cout << std::endl;
}

int main() {
	char sen[30];
	std::cout << "Enter input string: ";
	fgets(sen,30 ,stdin);
	string S(sen);
	
	isVowel(S);
}
