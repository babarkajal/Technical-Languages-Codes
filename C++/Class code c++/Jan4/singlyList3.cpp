//by using head as a global variable
#include <iostream>
#include <cstring>
#include <malloc.h>

//structure Defination
struct PlayerData {
	
	int jerseyNo;
	std::string playerName;
	PlayerData* next;

};

//global head
PlayerData* head=NULL;

//createNode function
void createNode(int n) {
	PlayerData* temp = NULL;
	std::string tempName;
	for(int i=0; i<n; i++) {
		//allocate size to the new player
		
		struct PlayerData* newNode = (struct PlayerData*)malloc(sizeof(struct PlayerData));
			
		//accept data in the node
		std::cout << "Enter Jersey No: ";
		std::cin >> newNode->jerseyNo;
			
		
		newNode->playerName = "name";
		
		std::cout << "Enter Name of Player: ";
		fgets(newNode->playerName,32,stdin);	
		newNode->next = NULL;
		
				
		//check whether head is null or not
		if(head == NULL){
			head=newNode;
			temp = head;
		}else {	
			//insert after new Node
			temp->next = newNode;
			temp =newNode;
		}	
	}
}

//display List
void displayList() {
	PlayerData *temp = head;
	while(temp !=NULL) {
		std::cout << " | " << temp->jerseyNo <<  " | " << temp->playerName << " | " << "------>";	
		temp= temp->next;
	}	
	std::cout << "NULL" <<std::endl;
}
int main() {
	int n;
	std::cout << "Enter Number of node: ";
	std::cin >> n;
	
	//call createNode fun
	createNode(n);
	displayList();
}
