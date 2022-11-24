#include <iostream>

//extern char TV_channel[20];		works
void window() {
	extern char TV_channel[20];
	std::cout << "Tv " << TV_channel << std::endl;	
}
