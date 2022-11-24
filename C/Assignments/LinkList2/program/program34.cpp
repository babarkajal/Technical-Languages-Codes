/*
 *
34.Write a program which accept singly linear linked list from and check whether linked list ispallindrom or not.
Function Prototype : int ListPallindrom(struct node *First);
Input linked list : |10|->|20|->|30|->|40|->|30|->|20|->|10|
Output : The given linked list is pallindrom.
*
*/
#include<iostream>


//strcture declaration
struct node {
	int no;	//data
	node *next;

};

int num=0;
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
		
		if(data > 9 && data < 99)  
			num = num*100 + data;
		else if(data < 9 && data >= 0)
			num = num*10 + data;
		else if(data > 99 && data <999)
			num = num*1000 + data;
		
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


//--------------------------------------------- Main function ------------------------------------------------

int main() {

	struct node *head=NULL;
	int n;
	std::cout << "Enter number of elements: ";
	std::cin >> n;
	
	//call function to create node
	createList(&head, n);
	displayList(head);
       	std::cout << num <<std::endl;	
	

}

