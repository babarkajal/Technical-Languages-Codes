/*
Program 2: Write a Program that accepts a String from user and prints the
length of string.
Input: heaven is just an illusion made by weak hearts
Output: The Length of entered String is 46
*/

#include <iostream>

int myStrLen(char* str) {
	    int i=0;
            for (; *(str+i)!='\0' ;i++);
	    return i-1;
}

int main() {
    char string[30];
    std::cout << "Enter input string: ";
    fgets(string ,30,stdin);
    
    std::cout << "Lenght of the enetered string: "<< myStrLen(string) << std::endl;

}
