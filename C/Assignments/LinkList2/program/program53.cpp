/*
53.Write a program which accept two singly circular linked list from user and concat first N
elements of source linked list
after destination linked list.
Function Prototype : int ConcatFirstN(
struct node **SrcHead, struct node **SrcTail,
struct node **DestHead, struct node **DestTail, int no
);
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Input number of elements : 2
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|
*/



#include <iostream>

//strcture declaration
struct node {
	int no;	//data
	node *next;

};

// -------------------------- to get lenght of list -----------------------------------
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


//---------------------------concat first n node of src to the dest ------------------------------
int concatFirstN(  node **srcHead,  node  **srcTail,  node **destHead,  node **destTail , int no) {
		
		node* temp;
		int count =1;
		if(*srcHead == NULL)				//if src is head then return 
			return 0;
		
		if(*destHead == NULL ) {
						
			temp= *srcHead;				//destHead is NULL then directly assign to the head 
			*destHead  = *srcHead;

			while(count < no)	{
				temp = temp->next;
				count++;
			}
			temp->next = *destHead;			//break the next link and make a circular link to the destHead
		}

		else {
			temp= *srcHead;				//destHead is NULL then directly assign to the head 
			(*destTail)->next = *srcHead;		//join src head at the end of dest list
			
			while(count < no)	{
				temp = temp->next;
				count++;
			}
			temp->next = *destHead;			//break the link
		}
		return 1;
					
}//end of concatFirstN
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
	
	int pos ;
	std::cout <<"Enter number of nodes for concatnation: "<<std::endl;
	std::cin >> pos;

	int max = getLength(src);		//find maximum of length

	//check whether entered pos is present in the list or not
	//If pos is greater maximum lenght or if it is less than 0 then it is invalid pos or 
	while( pos < 0 || pos > max) {

		std::cout << "Entered position is not present in list. Length of list " <<getLength(src)<< " \nPlease enter valid position: "<<std::endl;		      std::cin >> pos;
	}

	//concate list 
	int status = concatFirstN(&src ,&tailSrc , &dest, &tailDest, pos);

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


