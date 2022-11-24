#include <iostream>
#include <malloc.h>
#include <vector>


//structure declaration
struct PlayerData {
	int jerseyNo;
	std::string playerName;
	PlayerData* next;
};


PlayerData* head; 		//global Head

PlayerData* createList(PlayerData India[]) {
		head = NULL;					//at first make head null for every list 
		PlayerData *temp=NULL;				//for traversing list
		PlayerData *newNode;				//for new Node creation

		for(int i=0; i<3; i++) {			//copy all data into nodes
		
			newNode = (PlayerData* )malloc(sizeof(PlayerData));	//allocate memory to new node 
			newNode->jerseyNo = India[i].jerseyNo ;			//copy jersey no
			newNode->playerName = India[i].playerName;		//copy name 
			newNode->next = NULL; 					//next is pointing no where
			
		
			if(head == NULL) {			//check head is null or not
				head = newNode;
				temp = newNode;			//pointing to first
			}else {
				temp->next = newNode;		//add at the end;
				temp = newNode;	
			}
		}
//		std::cout << "address " << head;
		return head;
}

int main() {
	std::vector<PlayerData*> v;

//create three arrays which holds three object of structure Playerdata
	PlayerData India[3] = {{1,"KL Rahul"},{18, "Virat Kohli"},{7,"MS Dhoni"}};	
	PlayerData Aus[3] = {{5,"Aron Finch"},{31, "David Warner"},{49,"Steve Smith"}};	
	PlayerData Pak[3] = {{39,"Fakar Zaman"},{56, "Babar Azam"},{32,"Hasan Ali"}};	
	
//	std::cout << "address " <<  createList(India);
	v.push_back(createList(India));				//add all lists into  the vector
	v.push_back(createList(Aus));
	v.push_back(createList(Pak));
	
	
	std::vector<PlayerData* > :: iterator it;		//create iterator
	
	PlayerData* temp;					//for traversing 	
	
	//display the data
	for(it=v.begin(); it!=v.end(); it++ ){
		
		temp= *it;					//store  head of every list i.e *it. we are taking another 
								//pointer bcoz we don't want to change 'it' in the loop

		
		std::cout << std::endl;
		while(temp !=NULL) {				//traverse upto the end of list
	
			std::cout << " | " <<temp->jerseyNo << " | " <<  temp->playerName<< " | ";
			temp = temp->next;
			
			if(temp!=NULL) 
				std::cout << "-------->";
		}
		std::cout << std::endl;
		std::cout << "_____________________________________________________________________________" << std::endl;					
			
	}
}
