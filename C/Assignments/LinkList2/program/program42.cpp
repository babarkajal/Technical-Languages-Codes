/*
 * 42.Write a program which add new node in singly circular linked list at last position.
Function Prototype : int InsertLast(struct node **Head, struct node **Tail, int no);
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input data element : 21
Output linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|->|21|
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
		std::cout << "\t******* List is Empty *******";
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

//--------------------- insert at last -------------------
int insertLast(node** head , node **tail ,int data) {
		
		//create Node
		node *newNode = getData(data);
		node *temp = *tail;	//will point to the last node

		//if head is null
		if(*head == NULL) {
			*head = newNode;
		       	newNode->next = *head;	       
			return 1;
		}
		else {	
			(*tail)->next = newNode;	//add to the last node
			newNode->next = *head;	//form circular link 
			return 1;	
		}
		return -1;
}


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
	
	//insert at first
	int data;
	std::cout << "\nEnter data to insert at last position: ";
	std::cin >> data;
	insertLast(&head, &tail ,data);
	
	//display list
	displayList(head);
	return 0;
}


