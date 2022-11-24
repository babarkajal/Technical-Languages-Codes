//typedef and structure

#include <stdio.h>

typedef struct Developer{
			
		char deviceName[30];
		int deviceId;
		int price;
}Dev;

typedef struct Computer{
		
		Dev d;//varible of developer	
		char company_name[30];
		char computer_type[30];
}comp;


void main(){
		comp c1= {"computer",1034,50000,"DEll","PC"};
		comp c2= {"computer",3456,70000,"Lenovo","mainframe"};
		
		printf("\nDeviseName\tId\t price  companyname  type\n");
		printf("\n%s\t %d \t %d\t%s\t\t%s\n",c1.d.deviceName, c1.d.deviceId , c1.d.price ,c1.company_name ,c1.computer_type);
		printf("\n%s\t %d \t %d\t%s\t\t%s\n",c2.d.deviceName, c2.d.deviceId , c2.d.price ,c2.company_name ,c2.computer_type);
}	
		
