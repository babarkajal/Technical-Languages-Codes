/***************************************************** Program 30 ***********************************************************************************
Write a program which accept singly linear linked list and swap consecutive elements from that linked list.
Function Prototype : int Swap(struct node **Src);
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|->|80|>|90|
Output linked list :|20|->|10|->|40|->|30|->|60|->|50|->|80|->|70|>|90|
*/

/* ____________________________________________________ Test Cases __________________________________________________________________________________
 * Test case 0: user should enter positive num of nodes 
 * Test case 1: If first list is empty  then merged list contain data of only second list
 * Test case 2: If second list is empty then mergerd list contain data of only first list

*/

#include<iostream>


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





// ------------------------------- swap function -------------------------------------
int swapListFun(node** src) {
	std::cout << "adress: " << *src;
	if(*src == NULL) {
		return -1;
	}

	node *temp1 = *src;
	node *temp2 = temp1->next;
	int var;

	while(temp2 != NULL) {
		var = temp1->no;
		temp1->no = temp2->no;
		temp2->no = var;
		
		temp1 = temp2->next;	
		temp2 = temp1->next;	
	}
	return 0;
}


//------------------------------------ main function ------------------------------------
int main() {
	
	//take  head for  list
	struct node *src = NULL ;
	
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
		
	
	//create  list
	createList(&src, n);

	//display lists 
	std::cout << "First list:------------------" << std::endl;
	displayList(src);
	std::cout << "Address " << src << std::endl;
	int status = swapListFun(&src);

	if(status == 0) {
		std::cout << "After swapping :------------------" << std::endl;
		displayList(src);
	}
	else
		std::cout << "swapping operation cannot be done on the empty!!" << std::endl << std::endl;	
}//end of main
