//static fun 
//static function can use only static data memebers
//functions are only related to class not object therefore can be  called using the class name or object

#include <iostream>
using namespace std;

class Sample{
	int var;
public:	
	static int count;	//static varible
	int var2;
	void getdata(int n){
		var=n;
		count++;//inc count
	}
	void display(){
		cout<<"value = "<< var <<endl;
	}
	static void showCount(){
//		cout<< var << endl; invalid use of static varible
		cout<<"count = "<< count <<endl;
		
	}
	 
};
int Sample :: count;//defination

main(){
	Sample S1,S2;

	S1.getdata(10);
	
	cout<<Sample::count<<endl;	//access static varible using the class name
	S2.getdata(20);

	//DISPLAY
	S1.display();
	S2.display();
	
	//call fun using  class name
	Sample::showCount();

	//call fun by using obj
	S1.showCount();
	S2.showCount();
	
}
	

	
