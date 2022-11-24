#include <iostream>


class Player {
	int rank;
	std::string name;
	std::string nation;
	float avg;
	public:
		Player(int rank, std::string name, std::string nation , float avg) {
			this->rank = rank;
			this->name = name;
			this->nation = nation;
			this->avg = avg;
		}

		friend std::ostream& operator << (std::ostream& out ,Player &ref ) {
			std::cout << ref.rank << " " << ref.name << " " << ref.nation << " " << ref.avg << std::endl;
			return out;
		}


};


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


}
