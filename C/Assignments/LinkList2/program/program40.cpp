/*
 **************************************** Program 40 ******************************************
 40.Write a program which accepts singly linear linked list from user and print middle node of
list.
Function Prototype : int ListMid(
struct node *First
);
Input linked list : |60|->|70|->|50|->|40|->|30|->|10|->|20|
Output : 40
*
*/


#include <iostream>
//strcture declaration
struct node {
	int no;	//data
	node *next;

};

//to get lenght of list
int getLength(struct node *head) {
	struct node *temp = head;
	int count = 0;
	while(temp != NULL ) {
		count++;
		temp = temp->next;
	}
	return count;

}


// -------------------------------getData function -------------------------------------
struct node* getData(int data) {

	node* newNode = (node*)malloc(sizeof(node));		//allocate memory of size structure node on heap return address of it

	//assign fields of node
	newNode->no = data;
	newNode->next = NULL;
	return newNode;
}//end of getData

// -------------------------------crreate list function -------------------------------------
void createList(node ** head, int n) {

	int data;

	//temp pointer for traversal
	node* temp = NULL;

	//create n nodes
	for(int lc=0; lc<n; lc++) {

		std::cout << "Enter interger data " << lc+1  << ": ";
		std::cin >> data;

		node* newNode = getData(data);		//call function to create node it will return address of node

		//if head is null
		if(*head == NULL) {
			*head = newNode;		//add first node
			temp = *head;			//assign to the first node
		}
		else {
			temp->next = newNode;
			temp = temp->next;
		}
	}//end for loop


}//end of createList

//---------------------------------- display function -----------------------------------------
int displayList(struct node* head) {

	struct node* temp =head;

	if(temp == NULL) {
		std::cout << "\t******* List is Empty *******" << std::endl;
	}else {
		//last node condition
		while(temp !=NULL) {
			std::cout <<"|"<<temp->no <<"|";
			temp = temp->next;
			if(temp !=NULL)
				std::cout << " --> ";

		}
	}
	std::cout << std::endl<<std::endl;

}//end of displayList

//---------------------------------- mid function -----------------------------------------
int listMid(node *head) {

	node *temp = head;  //take on pointer
	
	//find mid position
	int mid = getLength(head) /2;

	if(mid == 0) 
		return 0;
       	
	int count = 1;		//take one counter
	while(count++ <= mid) {	
		temp = temp->next;	//travel upto that node 
	}	
	return temp->no;		//return data 
}//end fun

int main() {
	//head pointer
	node *head = NULL;
	int n;

	std::cout << "Enter num of nodes: ";
	std::cin >> n;
	
	//create List
	createList(&head, n);

	//display list 
	displayList(head);

	//call mid function
	int status = listMid(head);

	if(status)
		std::cout << "Middle data := " << status << std::endl;  
	else if(status == 0)
		std::cout << "No elements found in the list " << std::endl; 
	return 0;
}
