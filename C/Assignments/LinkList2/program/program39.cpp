/*
 ****************************************** Program 39 ******************************************
 * Write a program which accepts two singly linear linked list from user and compare both
linked list but only last N nodes.
Function Prototype : int ListICmp(
struct node *First, struct node *Second, int N
);
Input linked list 1 : |60|->|70|->|50|->|40|->|30|->|10|->|20|
Input linked list 2 : |40|->|80|->|70|->|60|->|30|->|10|->|20|
Input N : 3
Output linked list : Both the linked list are equal.
*/

/* ------------------------------------------Test Cases --------------------------------------------
 * Test case 0: User should enter positive inetger for size of list
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

int ListICmp(node* first , node* second, int pos) {
	
	//get lengths
	int len1= getLength(first);
	int len2 = getLength(second);

	//for counting
	int count = 0;

	node *temp1 = first , *temp2 = second;		// two pointers for first and second list
	


	//check whether entered pos is present in the list or not
	if(pos > len1 || pos > len2)
		return -1;

	int temp1Pos = len1 - pos; 			// pos to first list
	int temp2Pos = len2 - pos;			// pos to second list

	std::cout << "temp1pos" << temp1Pos << std::endl;
	std::cout << "temp2pos" << temp2Pos << std::endl;
	
	//traverse upto an the last N node
	while(temp1Pos--)
		temp1 = temp1->next;	//move to next
	
	while(temp2Pos--)
		temp2 = temp2->next;	//move to next
			
	while(temp1 != NULL) {
		//if match found increment counter
		if(temp1->no == temp2->no) 
				count++;

		temp1 = temp1->next;	//move to
		temp2 = temp2->next;	//next node
			
	}
	
	//if count is same as lenght then lists are same
	if(count == pos)
		return 0;
	else 
		return 1;	
}//end of fun


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

	
	int pos;

	//get position
	std::cout << "Enter the pos for comparision: ";
	std::cin >> pos;
	

	//call function 
	int status = ListICmp(first, second, pos);
	
	//Test conditions
	if(!status) 
		std::cout << "Entered Two lists are same till node " <<  pos << "\n\n";
	else if(status == 1) 
		std::cout << "Entered Two lists are not same till node " << pos << "\n\n";
	else if(status == -1)
		std::cout << "Entered position is not present in the list\n\n";
}
