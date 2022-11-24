//structure  for disease
typedef struct Disease {
        char *diseases;
        int discoveredYear;
        enum {severe , notsevere} bool;
        struct Disease * next;
}Disease;


/*structure Pointer head for storing the address of first node
 * type: struct Disease
 */
struct Disease *head;


//create file pointer for updating in the file
FILE *fp=NULL; 

/*--------------------------------------------------------------------------------------------------------------------------------
 * function create()
 * 	returntype: Disease*
 * 	used to create a newNode 
 */

Disease* create() {
	int status;
	char temp[100];

	/*allocate the memory to the newNode
	 *  malloc(): allocate memoery on heap of size structure Disease and return address of it
	 */
	Disease* newNode = (Disease*)malloc(sizeof(Disease));


	//-------------- accept disease name ----------
	//test case: name should contain only letters 
	do {
		printf("\tEnter Disease Name: ");
		scanf(" %[^\n]",temp);
		status = isString(temp);
	        //check whethere entered string is contain only characters or not
		if(!status){
			printf("\t---------- Enter string only.Try again ---------- \n");	
		}
	}while(!status);
	
	
	/*allocate memory to the string using malloc
	 * malloc() : allocate memory of size temp
	 *            returnType is void so typecasting is required
	 */
	newNode->diseases = (char*)malloc(mystrlen(temp));
	
	//cpy the string into the node
	myStrcpy(newNode->diseases,temp);
	
	//--------------accept year ----------
	//test condition:- year should be non-negative
	do {
		printf("\tEnter Discovered year: ");
		scanf(" %d",&newNode->discoveredYear);
		if(newNode->discoveredYear < 0) {
			printf("\n\t---------- Year should be positive integer.Try again ---------- \n");
		}
	}while(newNode->discoveredYear < 0);
	
	//-------------- accept severity ----------
	//test condition:- severity should be severe or notsevere 
	do {
		char severity[20];
		printf("\tEnter Severity(severe/notsevere): ");
		scanf(" %s",severity);
		
		//if severe then assign it to the bool 
		if(!myStrCmp(severity , "severe"))
			newNode->bool = severe;
		
		//if severe then assign it to the bool 
		else if(!myStrCmp(severity , "notsevere")) 
				newNode->bool = notsevere;
		
		//if any other string then ask again 
		else
			printf("\n\t---------- Enter only severe/notsevere.Try again ------------\n");
		
		//check wheather string is severe or notsevere
		status = myStrCmp(severity,"severe") && myStrCmp(severity,"notsevere");
	}while(status);
		
	newNode->next =NULL;						//make next ptr is null
	return newNode;

}//..end of fun


//--------------------------------------------------------------------------------------------------------------------------------
/* function: createDisease(int)
 * return type:  void
 * parameters: 1.n - type: int 
 * 		     store num of diseases
 */
void createDiseaseList(int N) {
		/* newNode :
		 *  	type-Disease*
		 *  	used to store address of new node
		 * tempPtr:
		 * type- Disease*
		 * used for traversing
		 */
		Disease* newNode = NULL, *tempPtr = NULL;
		
		//create N nodes()
		for(int i=0; i<N; i++) {
			printf("\n\t------- Enter information of Disease %d -------\n",i+1);
			//call method to create newNode in list
			newNode = create();
			
			//if head is null then directly add first node 
			if(head == NULL) {
				head = newNode;
				newNode->next = head;		
			}
			else {
				//traverse to the end of list 
				tempPtr = head;
				do {
					tempPtr = tempPtr->next;
				}while(tempPtr->next != head);
				
				
				tempPtr->next = newNode;		//add node to the end of list
				tempPtr = tempPtr->next;		//jump to the newly added node
				tempPtr->next = head;			//last node of list should pointing to the first node
			}
			
			//open file to add updated content in the list
			fp = fopen("gohome.txt","a");
			fprintf(fp, "%s: \n" , "----- Node created -----");
			fprintf(fp, "Disease name: %s \tDiscovered year:%d \tseverity: %d\n",newNode->diseases ,newNode->discoveredYear,newNode->bool);
			fclose(fp);
		}

}//end of fun

//--------------------------------------------------------------------------------------------------------------------------------
/*function display():
 * 	returnType: void
 * 	used to display all the list
 */
void display() {
	Disease* temp=head;
	
	if (temp==NULL) 
		printf("\n\t------------- Empty!!! ---------------\n\t\tNo Information about the disease \n");
	else {
		printf("\n\t----------- Disease Information --------------\n");
		int i=1;
		do {
			printf("\t\t--- %d. ---\n",i);
			printf("\tDisease Name: %s\n", temp->diseases);
		       	printf("\tDiscovered year: %d\n",temp->discoveredYear);
		       	printf("\tSeverity: %d\n",temp->bool);
			temp = temp->next;
			i++;
		}while(temp!=head);
	}
}//end of fun


//--------------------------------------------------------------------------------------------------------------------------------
/* function addAtFirst();
 * 	returnType: void
 * 	function to add node at the first place
 */
int addAtFirst() {
		//open file to write the updated content
		fp = fopen("gohome.txt","a");


		printf("\n\t------- Enter information of Disease to add at first postition ----------\n");
		
		/* 1.newDisease: 	
		 * 		type- Disease*
		 * 		hold the address of newly created node
		 * 2.temp:
		 * 		type- Disease*
		 * 		used to traverse the list
		 */
		Disease* newDisease = create() ,*temp = head;	

		//if head is null then directly add
		if(temp==NULL) {
			head=newDisease;
			newDisease->next=head;			//next of last node should point to the first node
			fprintf(fp, "%s\n" , "----- Node created: -----");
			fprintf(fp, "Disease name: %s\tDiscovered year: %d\tseverity: %d\n",newDisease->diseases ,newDisease->discoveredYear,newDisease->bool);
			fclose(fp);
			return 0;
			
		}

		else{
			newDisease->next=head;			//next of last node should point to the first node
			//if only one node is present 
			if(temp->next==head) {
				temp->next = newDisease;
				head = newDisease;
				
				//update in the file
				fprintf(fp, "%s: \n" , "----- Node created -----");
				fprintf(fp, "Disease name: %s\tDiscovered year: %d\tseverity: %d\n",newDisease->diseases ,newDisease->discoveredYear,newDisease->bool);
		  	} 

			//if more than one nodes are present then traverse upto the last node 
			//do changes at the last node that it should point to the newly added node
			else {
				do {
					temp = temp->next;				//traverse upto last
				}while(temp->next != head);

				temp->next = newDisease;				//last node is pointig to the last
				head = newDisease;					//add new node at first position
				
				//update in the file
				fprintf(fp, "%s: \n" , "----- Node created -----");
				fprintf(fp, "Disease name: %s\tDiscovered year: %d\tseverity: %d\n",newDisease->diseases ,newDisease->discoveredYear,newDisease->bool);
			}
			fclose(fp);
			return 0;

		}
		return 1;		//if node is not inserted
}//end of fun

//--------------------------------------------------------------------------------------------------------------------------------
/* function delete(int):
 * 	returnType- int
 * 	functin to delete the data using discoverd year
 */
int deleteNode(int year) {
	Disease	*tempPtr= head, *prev=NULL;

	//if list is empty and return to the function{
	if(head==NULL) {
		printf("\n\t----------- No more record to delete  --------------\n");
		return -1;
	}
	else {

		do {
			//if we find the node which we wnt to delete
			if(tempPtr->discoveredYear == year) {
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

				//update in the file
				fp = fopen("gohome.txt","a");
				fprintf(fp, "%s: \n" , "----- Node deleted -----");
				fprintf(fp, "Disease name: %s\tDiscovered year: %d\tseverity: %d\n",tempPtr->diseases ,tempPtr->discoveredYear,tempPtr->bool);
				fclose(fp);
				free(tempPtr);						//free the node
				return 0;
			
			}	
			
			prev = tempPtr;							//store the address of prev node of deletednode	
			tempPtr = tempPtr->next;					//traverse the list

		}while(tempPtr!=head);							//upto the last node
	}	
	return 1;									//return 1 if requested node not found
}//end of fun


//------------------------------------------------------------------------------------------------------------------------------------------------
/*function: exitLife():
 * 		returnType: int 
 * 		function to free all the space allocated for link list
 */
int exitLife() {
	Disease* tempPtr= head,*prev=NULL;
	//if there is no any node
	if(head==NULL) {		
		return 0;	
	}
	else{
		do {
			prev  = tempPtr;
			tempPtr=  tempPtr->next;
			free(prev);

		}while(tempPtr!= head);
		head = NULL;
		return 0;
	}
	return 1;
}
