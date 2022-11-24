//sort on the basis of ranking

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
		friend std::ostream& operator << (std::ostream& out ,Player &ref ) {
			std::cout << ref.rank << "\t" << ref.name << "\t" << ref.nation << "\t" << ref.avg << std::endl;
			return out;
		}
		
		//sorting function using rank
	/*	void sort(Player arr[]) {
				Player temp;
				for(int olc = 0; olc < 5; olc++) {
					for(int ilc = olc; ilc < 5; ilc++) {
						if(arr[olc].rank > arr[ilc].rank) {
							temp = arr[olc];
							arr[olc] = arr[ilc];
							arr[ilc] = temp;
						}
					}
				}
				//print sorted array
				for(int i=0; i<5; i++ ){
					std::cout << arr[i] << std::endl;	
				}
		}*/	
				
		friend void sort(Player arr[]);	
	
};

void sort(Player arr[]) {
		Player temp;
		for(int olc = 0; olc < 5; olc++) {
			for(int ilc = olc; ilc < 5; ilc++) {
				if(arr[olc].rank > arr[ilc].rank) {
					temp = arr[olc];
					arr[olc] = arr[ilc];
					arr[ilc] = temp;
				}
			}
		}
		std::cout << "___________________________Sorted Array_____________________________" <<std::endl;
		//print sorted array
		for(int i=0; i<5; i++ ){
			std::cout << arr[i] << std::endl;	
		}
}	
				

int main() {
	Player obj3 = {2,"virat kohli", "India", 59.90};
	Player obj1 = {5," babar Azan", "pak", 58.90};
	Player obj2 = {1,"Rohit Sharma", "India", 68.90};
	Player obj4 = {3,"shai hope", "West Indies", 63.00};
	Player obj5 = {4,"Aaron finch", "Aus", 65.00};
	
	Player arr[5] = {obj1 , obj2, obj3 , obj4 , obj5};
	
	for(int i=0; i<5; i++ ){
		std::cout << arr[i] << std::endl;	
	}
	
	//sort
	sort(arr);
}
