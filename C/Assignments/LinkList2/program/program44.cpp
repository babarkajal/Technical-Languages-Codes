/*
 * 44.Write a program which remove first node from singly circular linked list.
Function Prototype : int DeleteFirst(
struct node **Head, struct node **Tail
);
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Output linked list : |20|->|30|->|40|->|50|->|60|->|70|
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

// -------------------------------create list function -------------------------------------
node* createList(node **head, int n) {

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
			newNode->next = *head;		//it will start pointing to itself
			temp = *head;			//assign to the first node
		}
		else {
			temp->next = newNode;
			temp = temp->next;
			temp->next = *head;

		}
	}//end for loop
	return temp;

}//end of createList


//---------------------------------- display function -----------------------------------------
int displayList(struct node* head) {

	struct node* temp =head;

	if(temp == NULL) {
		std::cout << "\t******* List is Empty *******" << std::endl;
	}else {
		//last node condition
		do {
			std::cout <<"|"<<temp->no <<"|";
			temp = temp->next;
			if(temp !=head)
				std::cout << " --> ";

		}while(temp !=head);
	}
	std::cout << std::endl<<std::endl;

}//end of displayList


//---------------------- delete function ---------------------------
int deleteFirst(node** head , node** tail) {

		node* temp = *head;		//temp ptr pointing to the first node
		if(*head == NULL) 
			return 1;

		//if list contain only one element
		if(temp->next == temp) {
			temp->next = NULL;
			*head = NULL;
			free(temp);
		}
		else {
			*head = temp->next;		//head will point to the next of first node
			(*tail)->next = *head;		//last link will point to the head
			temp->next = NULL;		// make link null
			free(temp);		//free first node	
			return 1;
		}

}//end of deletefirst

//------------------------main function --------------------------
int main() {

	//take  head list
	struct node *head = NULL;
	struct node *tail = NULL;	//take pointer for last node

	//to take num
	int n;

	std::cout << "Enter number of elements in  list: ";
	std::cin >> n;

	// ---- Test case 0 ----
	while(n < 0)  {
		std::cout << "Wrong value entered!!!\nPlease enter positive interger only " << std::endl;
		std::cout << "Enter again: ";
		std::cin >> n;
	}


	//create head list
	tail = createList(&head, n);

	//display list
	displayList(head);
	
	//delete first element node
	deleteFirst(&head , &tail);
	
	//display list
	std::cout << "After deletion: " << std::endl;
	displayList(head);
	return 0;
}
