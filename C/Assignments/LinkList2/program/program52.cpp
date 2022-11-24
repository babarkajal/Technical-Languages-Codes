/*
 * 52.Write a program which accept two singly circular linked list from user and concat source
linked list after destinationlinked list.
Function Prototype : int ConcatList(
struct node **SrcHead, struct node
**SrcTail, struct node **DestHead, struct node **DestTail );
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|>|70|
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
		std::cout << "\t******* List is Empty *******" ;
	}else {

		do {
			std::cout <<"|"<<temp->no <<"|" ; //<< temp->next << "|";
			temp = temp->next;

			//if last node found
			if(temp != head)
				std::cout << " --> ";

		}while(temp != head);
	}
	std::cout << std::endl<<std::endl;

}//end of displayList


//---------------------------concat src to the dest ------------------------------
int concatList( struct node **srcHead, struct node  **srcTail, struct node **destHead, struct node **destTail ) {
		
		
		if(*srcHead == NULL)		//if src is head then return 
			return 0;
		
		if(*destHead == NULL ) {		//destHead is NULL then directly assign to the head
			*destHead  = *srcHead;
		}

		else {
			(*destTail)->next = *srcHead;		//join src head at the end of dest list
			(*srcTail)->next = *destHead;		// create link to dest head
		}
		return 1;
					
}

//------------------------main function --------------------------
int main() {

	//take  two head ptr for two lists 
	struct node *src= NULL , *dest = NULL;
	struct node *tailSrc = NULL, *tailDest = NULL;		//take pointers for last node

	//to take lenght and num
	int len , num;

	std::cout << "Enter number of elements in Source list: ";
	std::cin >> len;

	// ---- Test case 0 ----
	while(len < 0)  {
		std::cout << "Wrong value entered!!!\nPlease enter positive interger only " << std::endl;
		std::cout << "Enter again: ";
		std::cin >> len;
	}


	//create src list
	tailSrc = createList(&src, len);

	std::cout << "Enter number of elements in Destination list: ";
	std::cin >> len;

	// ---- Test case 0 ----
	while(len < 0)  {
		std::cout << "Wrong value entered!!!\nPlease enter positive interger only " << std::endl;
		std::cout << "Enter again: ";
		std::cin >> len;
	}
	//create dest list
	tailDest = createList(&dest, len);

	//display all lists
	std::cout << "Source list -----------" <<std::endl;
	display(src, tailSrc);
	
	std::cout << "Destination list -----------" <<std::endl;
	display(dest, tailDest);
	std::cout << std::endl;
	
	
	//concate list 
	int status = concatList(&src ,&tailSrc , &dest, &tailDest);

	std::cout << "After concatention ------------" <<std::endl;
	if(status) {
		std::cout << "Concatenated Successfully " <<std::endl;
		display(dest,tailDest );
	}
	else {
		std::cout << "Source list is Empty" <<std::endl;
		display(dest,tailDest );
	}
	return 0;
}


