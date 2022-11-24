#include <iostream>


void run();
using namespace std;

int main(){

	int a = 1;

	//here cin works as a normal varible
	int cin = 8;
	
	//this means cin is a normal variable which is used with << shift operator 
	int c = cin << a; 

	cout << c << endl;
	cout << a << std::endl;
	cout << cin << std::endl;

	run();
	return 0;

}

void run() {
	int cout;
	
	//here cout works as a normal varible
	cin >> cout;
	
	//this means we are using cout variable and string for function  << 
	//internally he << operator function la call karych try kartoy mhnun error ahe 
	cout << "Cout = " << cout << std::endl;
	
	//simple cout << 4 as kel tr he shift operator sarkh work karel
	cout << 2;
}
