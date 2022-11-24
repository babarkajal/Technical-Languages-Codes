#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	std::vector<int>::iterator it;
	
	for(it=v.begin(); it!=v.end(); it++) {

		std::cout << *it <<std::endl;
	}


}

