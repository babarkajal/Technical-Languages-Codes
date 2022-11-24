/*
48.Write a program which search first occurrence of particular element from singly linear
linked list.
Function should return position at which element is found.
Function Prototype : int SearchFirstOcc(struct node *Head, struct node *Tail, int no);
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
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
			temp->next = newNode;		//assign new node to the previous
			temp = temp->next;		// move temp to that node
			temp->next = *head;		//add link to first node

		}
	}//end for loop

	return temp;		//return address of last node to the tail in main

}//end of createList


//---------------------------------- display function -----------------------------------------
void display(struct node* head ,struct node * tail) {

	struct node* temp =head;
	if(temp == NULL) {
		std::cout << "\t******* List is Empty *******" << std::endl;
		exit(0);
	}else {
		//last node condition
		do {
			std::cout <<"|"<<temp->no <<"|" ; //<< temp->next << "|";
			temp = temp->next;
			
			//if last node found 
			if(temp != tail->next)
				std::cout << " --> ";

		}while(temp != head);
	}
	std::cout << std::endl<<std::endl;

}//end of displayList


//------------------------find first occurace of element ---------
int SearchFirstOcc(struct node *head, struct node *tail, int no) {
		
		int count =1;		
		node* temp;	//take one pointer
		temp = head;		//assign to head

	
		do {
			//if element found return its position
			if(temp->no == no)
				return count;
			temp = temp->next;		//move to next node			
			count ++;
		}while(temp != head);		//traverse upto last node
		
		
		return 0;		//if not found return 0
}//end of SreachFirst

//------------------------main function --------------------------
int main() {

	//take  head list
	struct node *head = NULL;
	struct node *tail = NULL;	//take pointer for last node

	//to take lenght and num
	int n , num;

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
	display(head, tail);
	
	std::cout << "Enter num: ";
	std::cin >> num;
	//call funciton
	int status = SearchFirstOcc(head ,tail , num);

	//check found or not
	if(status) 
		std::cout << "First occurance of " << num << " is found at position " << status << std::endl;
	else 
		std::cout << "Element Not found" <<std::endl;
}
