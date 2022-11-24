#include <iostream>

struct PlayerData {
	
	int jerseyNo;
	std::string name;
	PlayerData *next;

};

int main() {

	std::cout << "Size = " << sizeof(PlayerData) << std::endl;
}
