/*
 * 47.Write a program which displays contents of singly circular linked list.
Function Prototype :
void Display(
struct node *Head , struct node *Tail
);
*/

#include <iostream>
//strcture declaration
struct node {
	int no;	//data
	node *next;

};



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


//-------------------------main function -----------------------------------
int main() {
	
	//take two heads for two lists
	struct node *first = NULL , *second=NULL;
	
	//to take num
	int n;
	
	std::cout << "Enter number of elements in first list: ";
	std::cin >> n;
	
	// ---- Test case 0 ----
	while(n < 0)  {
		std::cout << "Wrong value entered!!!\nPlease enter positive interger only " << std::endl;
		std::cout << "Enter again: ";
		std::cin >> n;
	}
		
	
	//create first list
	createList(&first, n);

	std::cout << "Enter number of elements in second list: ";
	std::cin >> n;
	
	// ---- Test case 0 ----
	while(n < 0 )  {
		std::cout << "Wrong value entered!!!\nPlease enter positive interger only " << std::endl;
		std::cout << "Enter again: ";
		std::cin >> n;
	}

	//create second list
	createList(&second, n);			//call function


	int status = ListCmp(&first, &second);
	
	if(!status) 
		std::cout << "Entered Two lists are same\n\n";
	else if(status) 
		std::cout << "Entered Two lists are not same\n\n";
	else 
		std::cout << "Entered Two lists are not having same length\n\n";
}
