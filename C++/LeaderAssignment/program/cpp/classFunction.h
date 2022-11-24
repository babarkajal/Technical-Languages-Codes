//class definatio
class Disease {
	private:
		std::string disease;
		int disYear;
		int severe;
	public:	
		//next pointer
		Disease* next;

		//constructor
		Disease() {
			disease = "";
			disYear = 0;
			severe = 0;
			next = NULL;
		}

		//parameterized constructor
		Disease( std::string disease , int disYear, int severe) {
				this->disease = disease;
				this->disYear = disYear;
				this->severe = severe;
				next = NULL;
		}
		
		//functions
		static Disease* acceptData();
		static int deleteNode(int);
		static int addAtFirst();
		static void createList(int);
		void putData();


}*head = NULL; 			//head pointer



//function to accept data from user
Disease* Disease:: acceptData() {
		std::string dName;
		int year;
		int severe;

                //accept name
                std::cout << "\n\tEnter Disease name: ";
                std::cin >> dName;

                //accept disecovered year
                std::cout << "\tEnter discoverd year: ";
                std::cin >> year;

                std::cout << "\tEnter severity: ";
                std::cin >> severe;

                //assign values to the object  and retur the address of the function to the calling function
                return new Disease(dName, year,severe);
}//...end of function


//function to create list 
void Disease::createList(int n) {

	//accept data from user 
	for(int i=0; i< n;i++) {

		//create a new object 
		Disease *newNode = Disease::acceptData();
		
		if(head == NULL) {
				head = newNode;
				newNode->next = head;
		}
		else {
			Disease* temp=head;
			while(temp->next!=head) {
					temp = temp->next;
			}
			temp->next = newNode;
			newNode->next = head;
		}
	}

}

//clas function to display data
void Disease::putData() {
		std::cout << "\tDisease name: "<< disease << std::endl;
		std::cout << "\tDiscovered year: "<< disYear << std::endl;
		std::cout << "\tSeverity: "<< severe << std::endl;
}

//normal function 
int Disease:: addAtFirst() {
		
		std::cout << "\n\tEnter disease information to add at first position\n";
		Disease *newNode = Disease::acceptData();
		
		//if head is null then directly add 
		if(head == NULL) {
				head = newNode;
				newNode->next = head;
		}

		//if head is not null then traverse upto the last and make change to the last node and then add
		else {
				Disease *temp = head;
				while(temp->next!=head) {
					temp = temp->next;
				}
				temp->next = newNode;				//last node should point to the first node
				newNode->next = head;				//newNode->next should point old first node
				head = newNode;					//then add it to the start i.e head
		}
}

//--------------------------------------------------------------------------------------------------------------------------------
/* function delete(int):
 * 	returnType- int
 * 	functin to delete the data using discoverd year
 */
int Disease::deleteNode(int year) {
	Disease	*tempPtr= head, *prev=NULL;

	//if list is empty and return to the function{
	if(head==NULL) {
		printf("\n\t----------- No more record to delete  --------------\n");
		return -1;
	}
	else {

		do{
			
			//if we find the node which we wnt to delete
			if(tempPtr->disYear == year) {
				
				if(tempPtr==head) {
					
					//if deletenode is first node and there is only one node in the list
			 		if(tempPtr->next == head) {
							tempPtr->next = NULL;		
							head = NULL;			//clear the head
					}
					
					//if deleted node is first and there are many nodes in the list
					else {

						head = tempPtr->next;			//make second node as first
					        tempPtr->next = NULL;			//break the link 

						Disease *traverse = head;		//traverse upto the last node
						while(traverse->next != tempPtr)	
							traverse= traverse->next;
						traverse->next = head;			//last node should point to the new first node
					}
				}

				//if node is middle node
				else {
					prev->next = tempPtr->next;
					tempPtr->next = NULL;
				}
				delete(tempPtr);
				return 0;
			
			}	
			prev = tempPtr;							//store the address of prev node of deletednode	
			tempPtr = tempPtr->next;					//traverse the list

		}while(tempPtr!=head);									//upto the last node
	}	
	return 1;									//return 1 if requested node not found
}//end of fun

