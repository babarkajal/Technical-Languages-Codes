#include<iostream>
using namespace std;


int main() {

	//specifying format with manipulator
	//manipulator change the state of the output stream
	cout << "a number in decimal "<< dec << 15 << endl << 16 << endl;
	cout << "a number in octal "<< oct << 15 << endl;
	cout << 65;
 	cout << "\nin hex " << hex << 15 << endl;
	cout << 16 << endl;
	cout << bin << 10 <<endl;	
	cout << "non-printing char (escape): "<< char(27) << endl;
}
