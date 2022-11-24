/*
 * 58.Write a program which accepts two singly linear linked list from user and compare both
linked list till first N nodes.
Function Prototype : int ListNCmp(struct node *SrcHead , struct node *SrcTail, struct node *DestHead, struct node *DestTail , int N);
Input linked list 1 : |60|->|70|->|50|->|40|->|30|->|10|->|20|
Input linked list 2 : |60|->|70|->|50|->|40|->|80|->|30|->|70|
Input N : 4
Output linked list : Both the linked list are equal till node 4.
*/


#include <iostream>

//strcture declaration
struct node {
	int no;	//data
	node *next;

};

//to get length of list
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
void display(struct node* head ,struct node * tail) {

	struct node* temp =head;

	if(temp == NULL) {
		std::cout << "\t******* List is Empty *******";
	}else {
		//last node condition
		do {
			std::cout <<"|"<<temp->no <<"|";
			temp = temp->next;

			//if last node found
			if(temp != tail->next)
				std::cout << " --> ";

		}while(temp !=head);
	}
	std::cout << std::endl ;

}//end of displayList

//----------------------------ListNCmp function ------------------------
int ListNCmp(node *srcHead , node *srcTail, node *destHead, node *destTail , int n) {
		
		node *tempSrc = srcHead , *tempDest = destHead;		//take two temp pointers
		while(n--) {
			if(tempSrc->no != tempDest->no) 
				return 1;
			tempSrc = tempSrc->next;
			tempDest = tempDest->next;

		}
		return 0;	
			
	
}



//------------------------main function --------------------------
int main() {

	//take two head ptr for two lists
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
	std::cout << "Source list: ";
	display(src, tailSrc);

	std::cout << "Destination list: ";
	display(dest, tailDest);
	
	std::cout << std::endl;

	int pos ;
	std::cout <<"Enter number of nodes for comparision: "<<std::endl;
	std::cin >> pos;

	//get the length of two lists
	int lenSrc = getLength(src);
	int lenDest = getLength(dest);

	int min = (lenSrc <= lenDest ) ? lenSrc :lenDest;	//find minimum


	//Test case : pos cannot be greater than the smallest list or negative value
	while(pos > min || pos < 0) {
		if( pos < 0) 
			std::cout << "You have entered negative value. Enter Positiove only " << std::endl;
		else 
		std::cout << "Cannot make comparision because the length which you have provided is greater than smallest list (Length= " <<getLength(src)<< ")" <<std::endl;
		
		//take position again
		std::cout <<"Please enter again: ";
		std::cin >> pos;	
	}	



	std::cout << "\nOutput of Comparision : " ;
	int status = ListNCmp(src,tailSrc,dest,tailDest, pos);
	if(status == 0)
		std::cout << "Lists are Same upto node " << pos <<std::endl;
	else if(status == 1)
		std::cout << "Lists are not same upto node "<< pos <<std::endl;

	return 0;
}
