//make function strictly inline

#include <iostream>


//this makes function inline strictly
inline void fun ()__attribute__((always_inline));


//inline function
inline void fun(){
		
		std::cout << "Hello world" << std::endl;
}	



int main() {
	
	//fun calls
	fun();
	fun();
	fun();
	fun();
	fun();
	fun();
}
