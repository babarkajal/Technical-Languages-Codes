#include<stdio.h>

void main() {
		int a=10;
		int *iptr= &a;//initilization of pointer

		
		printf("a= %d\n",a); //10

		printf("Address of a= %p\n",&a); //100

		printf("iptr= %p\n",iptr);  //100

		printf("*iptr =%d\n",*iptr); //dereferncing *iptr=10

}


/*   iptr stores add of a  
	 	    ____		*		    ______
		a  | 10 |  <-----------------------   iptr |  100 |
		   |____|				   |______|
		  100	103				   200	  207
	 
	  *iptr access the data of a;
*/
     
     

