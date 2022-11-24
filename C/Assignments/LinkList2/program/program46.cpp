/*
46.Write a program which remove node from singly circular linked list which is at specified
position.
Function Prototype : int DeleteAtPosition(struct node **Head, struct node **Tail, int pos );
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input position : 4
Output linked list : |10|->|20|->|30|->|50|->|60|->|70|
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
}//end of getLength 

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
int deleteAtPos(node** head , node** tail, int pos) {

		node* temp1 = *head , *temp2 = NULL;		//temp ptr pointing to the first node
		if(*head == NULL) 
			return 1;

		//if list contain only one element
		if(temp1->next == *head) {
			temp1->next = NULL;
			*head = NULL;
			free(temp1);
		}
		else {
			int count = 1;
			while(count < pos-1) {
				temp1 = temp1->next;
				count ++;
			}
			temp2 = temp1->next;
			temp1->next  = temp2->next;
			temp2->next = NULL;
			free(temp2);
			return 1;
		}

}//end of deletelast

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

	int pos ;
	std::cout <<"Enter position for  delete: "<<std::endl;
	std::cin >> pos;

	int max = getLength(head);		//find maximum of length
	std::cout  << std::endl << max <<std::endl;

	//check whether entered pos is present in the list or not
	//If pos is greater minimum lenght or if it is less than 0 then it is invalid pos or 
	while( pos < 0 || pos > max) {

		std::cout << "Entered position is not present in list. Length of list " <<getLength(head)<< " Please enter valid position"<<std::endl;			std::cin >> pos;
	}


	//delete specific node
	deleteAtPos(&head , &tail, pos);
	
	//display list
	std::cout << "After deletion: " << std::endl;
	displayList(head);
	return 0;
}
