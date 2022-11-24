//only one copy is created and used by the objects

#include <iostream>
using namespace std;

class item{
	int price;
	//static int count;
	public:
	static int count;
		void getdata(){
			price=100;
			count++;
		
		}
		void display(){
			cout<<"count is = "<<count<<endl;
		}
};

int item::count; //initialised to the zero

main(){
	item I,I2;
	I.getdata();
	I.display();
	
	I2.getdata();
	I2.display();
}
