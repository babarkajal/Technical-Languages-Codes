/*
 * 38.Write a program which accepts two singly linear linked list from user and compare both
linked list till first N nodes.
Function Prototype : int ListNCmp(
struct node *First , struct node *Second , int N
);
Input linked list 1 : |60|->|70|->|50|->|40|->|30|->|10|->|20|
Input linked list 2 : |60|->|70|->|50|->|40|->|80|->|30|->|70|Input N : 4
Output linked list : Both the linked list are equal till node 4.
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

// ------------------------ list compare function -------------------------------------
int ListNCmp(node* first , node* second, int pos) {
	

	//get lengths
	int len1= getLength(first);
	int len2 = getLength(second);

	//for counting
	int count = 0;

	node *temp1 = first , *temp2 = second;		// two pointers for first and second list
	
	int tempPos = pos; 			//copy position to another var
	//traverse upto an end
	while(tempPos--){
			
			//if match found increment counter
			if(temp1->no == temp2->no) 
				count++;

			temp1 = temp1->next;	//move to
			temp2 = temp2->next;	//next node
			
		}
	
	//if count is same as lenght then lists are same
	if(count == pos)
		return 1;
	else 
		return 0;	
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
	
	//if lists are empty
	if( !(getLength(first) && getLength(second))) {
		std::cout << "Both Lists are or either one of them is empty " <<std::endl << "No comparision" << std::endl << std::endl;
		exit(0);		//stop the further execution
	}
	
	//get position
	int pos;
	std::cout << "Enter the pos for comparision: ";
	std::cin >> pos;
	
	//int max = (getLength(first) > getLength(second)) ? getLength(first) : getLength(second);		//find maximum of length
	int min = (getLength(first) < getLength(second)) ? getLength(first) : getLength(second);		//find minimum of length
	std::cout  << std::endl << min <<std::endl;

	//check whether entered pos is present in the list or not
	//If pos is greater minimum lenght or if it is less than 0 then it is invalid pos or 
	while( pos < 0 || pos > min ) {

		std::cout << "Position is not present in the list or may be you have entered negative value. Please enter valid position"<<std::endl;		
		std::cout  << "For comparison enter value less than smallest length(length of lists  are " << getLength(first) << " & " << getLength(second) << "):" << std::endl;
		std::cin >> pos;
	}

	//call function 
	int status = ListNCmp(first, second, pos);
	
	//Test conditions
	if(status) 
		std::cout << "Entered Two lists are same till node " << pos << "\n\n";
	else if(status == 0) 
		std::cout << "Entered Two lists are not same till node " << pos << "\n\n";
}
