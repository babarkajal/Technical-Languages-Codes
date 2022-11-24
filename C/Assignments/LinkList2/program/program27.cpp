

/***************************************************** Program 27 ****************************************************************************
 * Write a program which accept source singly linear linked list from user and reverse that linear linked.
Function Prototype :
int ListReverse( struct node **Src );
Input source linked list : |110|->|73|->|10|->|80|->|70|->|12|
Output source linked list: |12|->|70|->|80|->|10|->|73|->|110| 

*/
 

#include <iostream>

struct node {
	int no;
	node* next;
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


//create node function
int createNode(struct node** head) {
		//allocate memory
		struct node* newNode = (struct node*)malloc(sizeof(struct node)); 
		struct node* temp = *head;

		std::cin >> newNode->no;	//accpet data from user
		newNode->next = NULL;
		
		//if head in null then attache one node 
		if(*head == NULL){
			*head = newNode;
		}
		//if head is contain at least one node
		else {
			
			while(temp->next != NULL) 	//traverse upto the last node
				temp=temp->next;
			temp->next = newNode;	
		}
	
	//	return head;
}//end of function

//display function
int displayList(struct node* head) {
	
	struct node* temp =head;
	
	if(temp == NULL) {
		std::cout << "\bt******* List is Empty *******" << std::endl;
	}else {
		//last node condition
		while(temp !=NULL) {
			std::cout <<"|"<<temp->no <<"|"; 
			temp = temp->next;
			if(temp !=NULL) 	
				std::cout << " --> ";	

		}
	}
	std::cout << std::endl;
}

//reverse function
int listReverse(node **head) {
	
	node *temp = *head, *temp2;
	int count;
	int len = getLength(*head);	
	printf("len= %d\n",len);
	
	node *last = *head;

	while(last->next != NULL)
		last = last->next;

	for(int i=0; i< len; i++) {
		count = len-2-i;
		temp = *head;
		if(count == -1) {
			temp->next = NULL;
		}
		else {
			while(count--) 
				temp = temp->next;

			temp->next->next = temp;
		}

	}
	//assign address of last to head
	*head = last;

}

int main() {
	node *head =NULL;
	int n;

	std::cout << "Enter number od nodes: ";
	std::cin >> n;
	std::cout << "Enter " <<n << " elements: " << std::endl;
	for(int i=0; i<n; i++) {
		createNode(&head);
	}
	displayList(head);
	listReverse(&head);
	displayList(head);
}






