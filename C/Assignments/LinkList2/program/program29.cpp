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


node* merge(node *head1 , node *head2) {
		
	node *temp=NULL, *traverse =NULL;
	node *mergeHead = NULL;

	if (head1 == NULL || head2 ==NULL) {
		if(head1==NULL)
			mergeHead = head2;
		else
			mergeHead = head1;

	}
	else {

		bool flag= false;
		traverse = head1;
		node *h1=head1 , *h2 = head2;
		
		
		do {
			
			if(mergeHead == NULL){
				mergeHead = traverse;
				temp = mergeHead;
			}	
			else {
				temp->next = traverse;
				temp = temp->next;
			}
			if(flag == true && h1!=NULL)  {
				traverse = h1;		//store address of the first list 
				h1 = h1->next;
				flag = false;
			}
			else if(flag ==false && h2!=NULL){
				traverse = h2;		//store address of the first list 
				h2 = h2->next;
				flag = true;
			}
			printf("********\n");
		}while(traverse != NULL);
		
		while(h1 != NULL) {
			mergeHead = h1;
			h1 = h1->next;
		}
		while(h2 != NULL) {
			mergeHead = h1;
			h2 = h2->next;
		}
	}
	std::cout << "mergHead "<<mergeHead << std::endl;
	return mergeHead;
}//end of fun

int main() {
	node *head1 =NULL, *head2 = NULL;
	int n;

	std::cout << "Enter number of nodes in list1: ";
	std::cin >> n;
	std::cout << "Enter " <<n << " elements: " << std::endl;
	for(int i=0; i<n; i++) {
		createNode(&head1);
	}
	std::cout << "Enter number of nodes in list2: ";
	std::cin >> n;
	std::cout << "Enter " <<n << " elements: " << std::endl;
	for(int i=0; i<n; i++) {
		createNode(&head2);
	}

	//display lists
	std::cout << "List1 : ";
	displayList(head1);
	std::cout << "List2 : ";
	displayList(head2);
	node*head3 = merge(head1,head2);
	//after merging the list
	std::cout << "After merge operation third list: ";
	displayList(head3);
}


