#include <iostream>
#include "classFunction.h"
using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------------
/*function display()
 * 	used to display it will further call class function
 */
void display() {
		
	if (head==NULL) {
                std::cout <<"\n\t--------- No record found ---------------"<<std::endl;
        }
        else {
                Disease *temp = head;
                std::cout <<"\n\t--------- Disease information: ---------\n" ;

                do {
                        	temp->putData();			//call class method on object to display data
				temp = temp->next;			//jump to next object
                	}while(temp!=head);
        }

}

//------------------------------------------------------------------------------------------------------------------------------------------------
/*function: exitLife():
 * 		returnType: int 
 * 		function to free all the space allocated for link list
 */
int exitLife() {
	Disease *tempPtr= head,*prev=NULL;
	//if there is no any node
	if(head==NULL) {		
		return 0;	
	}
	else{
		do{
			prev  = tempPtr;
			tempPtr=  tempPtr->next;
			free(prev);

		}while(tempPtr!= head);
		head = NULL;
		return 0;
	}
	return 1;
}


int main() {

	int choice,status;
	Disease *temp=NULL;
	int N;
	char ch;

	do {
		std::cout << "\n-----------------------------------------------------------------------\n";
		std::cout << "\t 1.Create disease list "<<std::endl;	
		std::cout << "\t 2.Add disease at first place "<<std::endl;	
		std::cout << "\t 3.display list "<<std::endl;	
		std::cout << "\t 4.delete the inforamtion on discovered year"<<std::endl;	
		std::cout << "\t 5.exitLife"<<std::endl;	

		std::cout << "\n\tEnter operation num: ";
		std::cin >> choice;

		switch(choice) {
			case 1:
				do {
					std::cout << "\n\tEnter num of nodes: ";
    					//free the input buffer
					std::cin >> N;
					if(N <= 0) 
						std::cout << "\n\tEnter non-negative integer value only"<<std::endl;
				}while(N <= 0);
				Disease::createList(N);
				break;
			
			case 2:
				Disease::addAtFirst();
				break;
			
			case 3:
				//call display method
				display();
				break;
			case 4:
				int year;
				std::cout << "\n\tEnter year to delete: ";
				std::cin >> year;
				//call static method 
				status = Disease::deleteNode(year); 
				if(status==0) 
					std::cout << "\n\t-------- Record deleted successfully ------------ \n";
				else if(status ==1) {
					std::cout << "\n\t Sorry:( Your are trying to delete the record which is not in thr list\n";
				}
				break;
			
			case 5:
				std::cout << "\n\t************** THANK YOU *****************\n";
				exitLife();
				exit(0);
				break;
	
		}
	}while(true);
	return 0;
}
