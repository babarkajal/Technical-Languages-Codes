//by using head as a local variable
#include <iostream>
#include <malloc.h>

//structure Defination
struct PlayerData {
	
	int jerseyNo;
	std::string playerName;
	PlayerData* next;

};

//createNode function
void createNode( PlayerData** head) {
	
	//allocate size to the new player
	struct PlayerData* newNode = (struct PlayerData*)malloc(sizeof(struct PlayerData));
	std::cout << "Enter no: ";
	std::cin >> newNode->jerseyNo;

	newNode->playerName = "kajal";
	std::cin >> newNode->playerName;
	newNode->next = NULL;
	*head = newNode;
	
}

int main() {
	//local head
	PlayerData* head = NULL;
		
	//call createNode fun
	createNode(&head);
	std::cout << head << std::endl;	//prints address 	
	std::cout << "no = "<< head->jerseyNo <<std::endl;
	std::cout << "name = "<< head->playerName <<std::endl;
	

}
