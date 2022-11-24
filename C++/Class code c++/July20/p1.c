
// insertion and extersion
// insertion operator '<<'
// extraction operator '>>'

#include <iostream>

int main() {

	int x;
	std::cout << "Enter the number: "; //insertion
	std::cin >> x;			//extraction
	std::cout << "You entered " << x << std::endl;
	
	return 0;

}
/*
std::cout << 

this statement internally call the function

ostream& operator <<( ostream cout , stirng S )

*/ 

