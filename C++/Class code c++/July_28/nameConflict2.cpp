#include <iostream>


void run();
using namespace std;

int main(){

	int a = 1;

	//here cin works as a normal varible
	int cin = 8;
	

	std::cout << a << std::endl;
	std::cout << cin << std::endl;

	run();
	return 0;

}

void run() {
	int cout;
	
	//here cout works as a normal varible
	cin >> cout;
	
	//donhi madhe fark asava mhnun cout chya pude std use karycha
	std::cout << "Cout = " << cout << std::endl;
	
}
