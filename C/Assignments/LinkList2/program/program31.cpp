/**************************************************************** Program 31 *************************************************************************
Write a program which accept source and destination linked list from user and we have to insert source linked list in destination linked list at given position.
Function Prototype :
int InsertAt(struct node **Src, struct node **dest, int pos);
Input src linked list : |10|->|20|->|30|->|40|
Input dest linked list: |50|->|60|->|70|->|80|
Input position : 3
Output dest linked list: |50|->|60|->|10|->|20|->|30|->|40|->|70|>|80|

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


// ------------------- Insert dest list into src list at give pos  ------------------------
int  insertAt(node** src, node** dest, int pos) {
		
		//teo temp pointer for traversal of lists
		node* tempSrc = *src;
		node* tempDest = *dest;

		//get length of src
		int len = getLength(*src);

		//if given pos is greater than 
		if(pos > len || pos < 0)
			return -1;
		
		int count=1;		//counter to list
		
		//if dest list is NULL  return 1
		if(*dest == NULL)
 			return 1;


		//if src list is null then directly assign dest to src
		//and return 0 which indicate successfully inserted
		if(*src == NULL) {
			*src = *dest;
			return 0;
		}

		//reach to the previous node of pos node
	      	while(count < pos-1) {
			tempSrc = tempSrc->next;
			count++;

		}

		//traverse dest list upto end 
		while(tempDest->next != NULL)
			tempDest = tempDest->next;
		
		tempDest->next = tempSrc->next;
		tempSrc->next = *dest;
		return 0;

}


//------------------------------------ main function ------------------------------------
int main() {
	
	//take two heads for two lists
	struct node *first = NULL , *second=NULL;
	
	//to take num
	int n, pos;
	
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

	std::cout << "Enter position for inserting destination list into source: ";
	std::cin >> pos;
	

	//call function
	int status = insertAt(&first, &second, pos);
	if(status == 0 ) {
		std::cout << "Inserted Successfully ------------------" << std::endl;
		displayList(first);

	}else if(status == 1){
		std::cout << "No data to insert ------------------" << std::endl;
		displayList(first);
	}
	else {
		std::cout << "Entered position is either greater than length of src list  or negative value\n\n ";
	}
}//end of main
