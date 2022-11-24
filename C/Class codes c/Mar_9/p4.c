int printf(const char*,...);

void main() {	
		int a,b;
		a=10,b=20;
		
		if( (a < 10)  &&  (++a && ++b) ) {      //first is false then condition is false 	
				printf("Hello\n");
		}
		if( (++b > 10)  ||  (++a && ++b) ) {	   //no need to check next one bcoz first is true =>statement is  true	
					
				printf("Hii\n");
		}

	printf("a= %d\n",a);//10
	printf("b= %d\n\n",b);//21

}


/*-------------------------------------------------------------------------------------------------------------------------------

if( (a < 10) && (++a && ++b) )    	|1.  a < 10=F			|			| first is false .when any cond- 
					|  				|	a=[10],b[20]	|tion is false in 'And' then over
  					|				|			|all expression is false.no	
					|      AND			|			|need to check further
					|				|			|	
					|2. ++a && ++b			|			|
					|    				|			|
					|   				|			|
					|				|			|
--------------------------------------------------------------------------------------------------------------------------------
if( (++b > 10)  ||  (++a && ++b) ) 	
				 	|				|			|no need to calculate 		
					|1.++b > 10			|			|the second one	bcoz they are	
					|   21 >10=f			|	a=[10],b[21]	|connected by OR
  					|				|			|
					|	OR			|			|
					|2. ++a && ++b			|			|	
					|    				|			|	
					|    				|			|
-------------------------------------------------------------------------------------------------------------------------------*/






