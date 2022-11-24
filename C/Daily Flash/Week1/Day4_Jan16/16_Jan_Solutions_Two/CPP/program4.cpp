
#include <iostream>

main() {

	int a;
	std::cout <<("Enter Positive Size : \n");
	std::cin >> a;
	
	if(a < 0 )
	 	exit(0);
	
	for(int i = 1; i <= a*a; i++ ){
		if(i % a == 0){
			std::cout << i << std::endl;
		}
		else{
			std::cout << i << "\t";
		}
	}
	return 0;
}
