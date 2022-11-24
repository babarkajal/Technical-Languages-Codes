#include<stdio.h>

void main() {
		int a,b;
		a= &b;//iptr takes the add of  b as a data

		
		printf("a= %p\n",a); //400

		printf("Address of a= %p\n",&a); //200

		printf("address of b=%p\n",&b);  //400

	

}


/*   iptr stores add of a  
	 	    ____				    ______
		b  | 0  |     			       	 a |  400 |
		   |____|				   |______|
		  400	403				   200	  207
	 
	  *iptr access the data of a;
*/
     
     

