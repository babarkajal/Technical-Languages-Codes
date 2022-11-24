#include <iostream>
#include <vector>

int main () {
	
	int arr1[] = {10,20,30};
	int arr2[] = {40,50,60};
	int arr3[] = {70,80,90};
	int arr4[] = {100,110,120};
	
	/*std::cout << arr1 <<std::endl;
	std::cout << arr2 <<std::endl;
	std::cout << arr3 <<std::endl;
	std::cout << arr4 <<std::endl;*/
 
	//array of pointers 
	int* ptrArr[] = {arr1,arr2,arr3,arr4};
	
	
	std::vector<int**> v;			//vector which of type int**
		
	v.push_back(ptrArr);			//push ptrArr into vector
	
	
	std::vector<int**>::iterator it;	//iterator to the vector

	int** temp;				//used  to store address of ptrArr temp

	for(it = v.begin(); it!=v.end(); it++) {
	//	std::cout << *it << std::endl;
	//	std::cout << **it << std::endl;
		
		temp = *it;			//*it gives the value inside vector and vector contains address of array of pointers
		
		for(int i=0; i<4; i++) {	
			std::cout << "Array  "<<i+1 <<std::endl; 
			for(int i=0; i<3; i++) {
				std::cout << *(*temp +i)<< "\t";		//same like multidimentional array
			}
			std::cout << std::endl;
			temp++;			//will point to next address in the array of pointer ptrArr
		
		}
		
	}
}
