//sort on the basis of ranking using pointer 

#include <iostream>


class Player {
	int rank;
	std::string name;
	std::string nation;
	float avg;
	public:
		//Defualt con
		Player() {
		}
		
		//parameterised con
		Player(int rank, std::string name, std::string nation , float avg) {
			this->rank = rank;
			this->name = name;
			this->nation = nation;
			this->avg = avg;
		}
		
		//overloaded operator << function
		friend std::ostream& operator << (std::ostream& out ,Player* ref ) {
			for(int i =0; i<5; i++) {
				std::cout << (ref+i)->rank << "\t" << (ref+i)->name << "\t" << (ref+i)->nation << "\t" 
						<< (ref+i)->avg << std::endl;
			}
			return out;
		}
		
			
		//sort friend function
		friend void sort(Player* arr);	
	
};

//sorting function
void sort(Player* arr) {
		//create a temp Player object 
		Player temp;

		//sorting logic
		for(int olc = 0; olc < 5; olc++) {
			for(int ilc = olc; ilc < 5; ilc++) {
				if( (arr+olc)->rank > (arr+ilc)->rank) {
					temp = *(arr+olc);
					*(arr+olc) = *(arr+ilc);
					*(arr+ilc) = temp;
				}
			}
		}
		std::cout << "___________________________Sorted Array_____________________________" <<std::endl;
		//print sorted array
		std::cout << arr << std::endl;
}	
				

int main() {
	Player obj3 = {2,"virat kohli", "India", 59.90};
	Player obj1 = {5," babar Azan", "pak", 58.90};
	Player obj2 = {1,"Rohit Sharma", "India", 68.90};
	Player obj4 = {3,"shai hope", "West Indies", 63.00};
	Player obj5 = {4,"Aaron finch", "Aus", 65.00};
	
	Player arr[5] = {obj1 , obj2, obj3 , obj4 , obj5};
	
	//assign address of array to the pointer of player type
	Player *ptr = arr;
	
	//call to overloaded function
	std::cout << ptr;

	//sort
	sort(arr);
}
