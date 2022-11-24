/***************************************************** Program 28 ***********************************************************************************
 29.Write a program which accept two singly linear linked list and then merge this two list in
such a way that resultant
may contain elements alternatively from one list and other list.
Input First linked list : |10|->|20|->|30|->|40|
Input second linked list: |50|->|60|->|70|->|80|
Output linked list: |10|->|50|->|20|->|60|->|30|->|70|->|40|->|80|

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
		std::cout << data << std::endl;
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


//------------------------------- lenght of list ---------------------------------------
int getLength(struct node *head) {
	struct node *temp = head;
	int count = 0;
	while(temp != NULL ) {
		count++;
		temp = temp->next;
	}
	return count;

}//end of getLength()


// ------------------------------- merge two lists -------------------------------------
node* mergeTwoLists(node* first, node* second) {
	
	node* head = NULL, *temp = NULL;
	
	//get lengths of two lists
	int len1 = getLength(first);
	int len2 = getLength(second);

	int len = len1+len2;
	int  count = 1;

	while(count <= len) {

		if(count%2 != 0) {		//constition for alternative element
			if(first !=NULL) {
				if(head == NULL) {
			 		head = first;
					temp = head;
				}else {
					temp->next = first;
					temp = temp->next;
				}
				first = first->next;		//move to the next node
			}

		}//end if
		else {
			if(second != NULL) {
				//if first list in empty
				if(head == NULL) {
			 		head = second;
					temp = head;
				}
				else {
					temp->next = second;
					temp = temp->next;
				}
				second = second->next;		//move to the next node
			}
	
		}//end if-else
		count++;
	}//end while
	
	return head;

}

//------------------------------------ main function ------------------------------------
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
	
	//display lists 
	std::cout << "First list:------------------" << std::endl;
	displayList(first);

	std::cout << "Second list:------------------" << std::endl;
	displayList(second);



	std::cout << "Merged list:------------------" << std::endl;
	node* mergeHead = mergeTwoLists(first, second);
	displayList(mergeHead);
}//end of main
