/*
 *
 43.Write a program which add new node in singly circular linked list at specified position.
Function Prototype : int InsertAtPosition(struct node **Head, struct node **Tail, int no, int pos);
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input data element : 21
Input position : 4Output linked list : |10|->|20|->|30|->|21|->|40|->|50|->|60|->|70|
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
	//if head is null
	if(head == NULL)
		return 0;
	do {
		count++;
		temp = temp->next;
	}while(temp != head);
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

// ------------------------ insertAtPos function -------------------
int insertAtPos(node** head , node **tail ,int data, int pos) {

		//create Node 
		node *newNode = getData(data);
		node *temp1 = *head;	//will point to the last node

		//if head is null
		if(*head == NULL) {
			*head = newNode;
		       	newNode->next = *head;
			return 1;
		}
		else {
			int count = 1;

			//if user wants to add newnode at pos 1 at that time head will be changed
			if(pos == 1){
				newNode->next = *head;
				*head = newNode;
				(*tail)->next = newNode;

			} else if(pos > getLength(*head)) {
					(*tail)->next = newNode;
					newNode->next = *head;
								
			}
			else { 
				
				while( count < pos-1){
					temp1 = temp1->next;
					count++;
				}
		
				newNode->next = temp1->next;
				temp1->next = newNode;
			}	
			return 1;
		}
		return -1;
}//end of insert function


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

	//insert at first
	int data, pos;
	std::cout << "Enter the position where data has to be inserted "<<std::endl;
	std::cin >> pos;
	
	std::cout << "\nEnter data to insert at " << pos <<" position: ";
	std::cin >> data;

	insertAtPos(&head, &tail ,data,pos);

	//display list
	displayList(head);
	return 0;
}
