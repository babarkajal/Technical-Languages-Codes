#include <iostream>

class Operator {
		int i1 = 10 , i2 = 20;
		float f1 = 10.1F , f2 =10.2f;
		char c1 = 'A' , c2 = 'a';
		double d1 = 20.2l , d2 = 30.3L;
		
		public:
//----------------------------------------operator+ -----------------------------------					
			//operator + which returns int
			friend int operator+(int ,int);
			friend int operator+(char,int);
			friend int operator+(char,char);
			friend int operator+(int ,char);

			//operator+ which return float
			friend float operator+(float,int);
			friend float operator+(float ,float);
			friend float operator+(float,char);
			
			//operator+ which return double	
			friend double operator+(double ,double);
			friend double operator+(double ,int);
			friend double operator+(double ,float);
			friend double operator+(double ,char);
//----------------------------------------operator- -----------------------------------			
			//operator - which returns int
			friend int operator-(int ,int);
			friend int operator-(char,int);
			friend int operator-(char,char);
			friend int operator-(int ,char);

			//operator- which return float
			friend float operator-(float,int);
			friend float operator-(float ,float);
			friend float operator-(float,char);
			
			//operator- which return double	
			friend double operator-(double ,double);
			friend double operator-(double ,int);
			friend double operator-(double ,float);
			friend double operator-(double ,char);
			
//----------------------------------------operator* -----------------------------------			
			//operator * which returns int
			friend int operator*(int ,int);
			friend int operator*(char,int);
			friend int operator*(char,char);
			friend int operator*(int ,char);

			//operator* which return float
			friend float operator*(float,int);
			friend float operator*(float ,float);
			friend float operator*(float , char);
			
			//operator* which return double	
			friend double operator*(double ,double);
			friend double operator*(double ,int);
			friend double operator*(double ,float);
			friend double operator*(double ,char);
			
			
//----------------------------------------operator/ -----------------------------------			
			//operator / which returns int
			friend int operator/(int ,int);
			friend int operator/(char,int);
			friend int operator/(char,char);
			friend int operator/(int ,char);

			//operator* which return float
			friend float operator/(float , int);
			friend float operator/(float ,float);
			friend float operator/(float ,char);
			
			//operator* which return double	
			friend double operator/(double ,double);
			friend double operator/(double ,int);
			friend double operator/(double ,float);
			friend double operator/(double ,char);

//-----------------------------pulic method to perform operations
			void performOperations();
		
};

void Operator:: performOperations() {

		std::cout << i1 + i2 <<std::endl;	//int + int
		std::cout << c1 + i1 <<std::endl;	//char + int
		std::cout << c1 + c2 <<std::endl;	//char + char
		
		
		std::cout << f1 + f2 <<std::endl;	//float + float
		std::cout << f1 + i2 <<std::endl;	//float + int
		std::cout << f1 + c2 <<std::endl;	//float + char
		
		std:: cout << d1 + d2 << std::endl;	//doule + doule
		std:: cout << d1 + i2 << std::endl;	//doule + int
		std:: cout << d1 + f2 << std::endl;	//doule + float
		std:: cout << d1 + c2 << std::endl;	//doule + char
		
	
}

//functions for add + operator which returns int value after addition 
int operator+(int x ,int y) {

	std :: cout << "In operator+(int , int) " << std::endl;
	return x + y;
}

int operator+(char x ,int y) {

	std :: cout << "In operator+(char , int) " << std::endl;
	return x + y;
}


int operator+(char x ,char y) {

	std :: cout << "In operator+(char,  char) " << std::endl;
	return x + y;
}



int operator+( int x ,char y) {

	std :: cout << "In operator+(int , char) " << std::endl;
	return x + y;
}



//functions for add + operator which returns float value after addition 
float operator+(float x , float y) {

	std :: cout << "In operator+(float , float) " << std::endl;
	return x + y;
}

float operator+(float x , int y) {

	std :: cout << "In operator+(float , int) " << std::endl;
	return x + y;
}

float operator+(float x , char y) {

	std :: cout << "In operator+(float , char) " << std::endl;
	return x + y;
}


//function for + operator double which returns doule value after addition
double operator+(double x, double y ){
	
	std :: cout << "In operator+(double , double) " << std::endl;
	return x + y;
}

double operator+(double x, int y ){
	
	std :: cout << "In operator+(double , int) " << std::endl;
	return x + y;
}

double operator+(double x, char y ){
	
	std :: cout << "In operator+(double , char) " << std::endl;
	return x + y;
}


double operator+(double x, float y ){
	
	std :: cout << "In operator+(double , float) " << std::endl;
	return x + y;
}

//-------------------------------------------Function operator- ------------------------------------------------------------------

//functions for add - operator which returns int value after addition 
int operator-(int x ,int y) {

	std :: cout << "In operator-(int , int) " << std::endl;
	return x - y;
}

int operator-(char x ,int y) {

	std :: cout << "In operator-(char , int) " << std::endl;
	return x - y;
}


int operator-(char x ,char y) {

	std :: cout << "In operator-(char,  char) " << std::endl;
	return x - y;
}



int operator-( int x ,char y) {

	std :: cout << "In operator-(int , char) " << std::endl;
	return x - y;
}



//functions for add - operator which returns float value after addition 
float operator-(float x , float y) {

	std :: cout << "In operator-(float , float) " << std::endl;
	return x - y;
}

float operator-(float x , int y) {

	std :: cout << "In operator-(float , int) " << std::endl;
	return x - y;
}

float operator-(float x , char y) {

	std :: cout << "In operator-(float , char) " << std::endl;
	return x - y;
}


//function for - operator double which returns doule value after addition
double operator-(double x, double y ){
	
	std :: cout << "In operator-(double , double) " << std::endl;
	return x - y;
}

double operator-(double x, int y ){
	
	std :: cout << "In operator-(double , int) " << std::endl;
	return x - y;
}

double operator-(double x, char y ){
	
	std :: cout << "In operator-(double , char) " << std::endl;
	return x - y;
}


double operator-(double x, float y ){
	
	std :: cout << "In operator-(double , float) " << std::endl;
	return x - y;
}


//-------------------------------------------Function operator* ------------------------------------------------------------------

//functions for add * operator which returns int value after addition 
int operator*(int x ,int y) {

	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}

int operator*(char x ,int y) {

	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}


int operator*(char x ,char y) {

	std :: cout << "In operator-(char,  char) " << std::endl;
	return x - y;
}



int operator*( int x ,char y) {

	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}



//functions for add / operator which returns float value after addition 
float operator*(float x , float y) {

	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}

float operator*(float x , int y) {

	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}

float operator*(float x , char y) {

	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}


//function for * operator double which returns doule value after addition
double operator*(double x, double y ){
	
	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}

double operator*(double x, int y ){
	
	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}

double operator*(double x, char y ){
	
	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}


double operator*(double x, float y ){
	
	std :: cout << "In operator*(double , float) " << std::endl;
	return x * y;
}

//-------------------------------------------Function operator/ ------------------------------------------------------------------

//functions for add / operator which returns int value after addition 
int operator/(int x ,int y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}

int operator/(char x ,int y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}


int operator/(char x ,char y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}



int operator/( int x ,char y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}



//functions for add + operator which returns float value after addition 
float operator/(float x , float y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}

float operator/(float x , int y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}

float operator/(float x , char y) {

	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}


//function for / operator double which returns doule value after addition
double operator/(double x, double y ){
	
	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}

double operator/(double x, int y ){
	
	std :: cout << "In operator/(double , int) " << std::endl;
	return x / y;
}

double operator/(double x, char y ){
	
	std :: cout << "In operator/(double , char) " << std::endl;
	return x / y;
}


double operator/(double x, float y ){
	
	std :: cout << "In operator/(double , float) " << std::endl;
	return x / y;
}

int main() {
	Operator op;
	op.performOperations();
	return 0;

}





