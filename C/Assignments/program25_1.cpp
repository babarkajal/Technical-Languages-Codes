/*
-------------------------------- Program 25 --------------------------------------
Write a program which accept source singly linear linked
list from user and copy the contents into destination singly linear
linked in ascending order.
Function Prototype :
int CopyAsc(
struct node **Src , struct node **Dest
);
______________________________________________________________________________________________________________________________________
*/

#include <iostream>
#include <malloc.h>

//structure declareation
struct node {
	int no;
	// Data element
	struct node *next; // Address of next node
};


//create node function
struct node* createNode(struct node* head) {
		//allocate memory
		struct node* newNode = (struct node*)malloc(sizeof(struct node)); 
		struct node* temp = head;
		std::cin >> newNode->no;	//accpet data from user
		newNode->next = NULL;

		if(head == NULL){
			head = newNode;
		}else {
			
			while(temp->next != NULL) 	//traverse upto the last node
				temp=temp->next;
			temp->next = newNode;	
		}
	
		return head;
}//end of function

//to get length of list
int getLength(struct node *head) {
        struct node *temp = head;
        int count = 0;
        while(temp != NULL ) {
                count++;
                temp = temp->next;
        }
        return count;

}

node* insertInDest(struct node *destTemp, int data) {
		
		struct node* temp = destTemp;
		struct node  *newNode = (node*)malloc(sizeof(struct node));
		//copy data		
		newNode->no = data;
		newNode->next =NULL;
	
		//if head is null then insert
		if(destTemp==NULL) {
			destTemp = newNode;
		}else {
			temp =destTemp;
			struct node *temp =destTemp,*prev = NULL; 

			if(newNode->no > temp->no) {
				while(newNode->no > temp->no && temp=NULL) {
					if(temp->next == NULL)
						temp->next =newNode;
					prev = temp;
					temp = temp->next;
					
				}
				newNode->next = prev->next;
				prev->next = newNode;
			}else {
				struct node *temp =destTemp,*prev = NULL; 
				if(newNode->no < temp->no) {
						newNode->next = newNode;
						destTemp = newNode;
				}				
			}
			temp->next = newNode;
		}
		return destTemp;


}



//copy in asceding order
int CopyAsc( struct node **src , struct node **dest) {
		
		struct node *srcTemp = *src;
		struct node *destTemp = *dest;
		struct node *tempInsert =NULL;

		//traverse upto the last node od src
		while(srcTemp != NULL) {	
				
			insertAtDest(*dest , srcTemp->no);
			srcTemp =srcTem->next;		
		}
}	

//display function
void displayList(struct node* head) {
        struct node* temp =head;
	if(head ==NULL) {
		std::cout << "-----------List Is Empty--------------";
	}
	else {
        	//last node condition
        	while(temp !=NULL) {
                	std::cout <<"|"<<temp->no <<"|";
                	temp = temp->next;
                	if(temp !=NULL)
                        	std::cout << " --> ";

        	}
        	std::cout << std::endl;
	}
}


//main function
int main() {

	//head of src and dest link list
	struct node *srcHead= NULL;
	struct node *destHead = NULL;
	int src, dest ,data;

	std::cout << "Enter number of nodes in the source list: " ;
	std::cin >> src;
	
	//accept source list	
	for(int i=0; i<src; i++) {
		std::cout <<"Enter data "<< i+1 << ": ";
		srcHead = createNode(srcHead);
	}

	
	//display src and dest lists
	std::cout << "\nSource List-----------------" << std::endl;
	displayList(srcHead);
	
	//call concta fun
	int status = CopyAsc(&srcHead, &destHead); 
	displayList(destHead);
	
		
}
