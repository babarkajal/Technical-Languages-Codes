int printf(const char*,...);

void main() {	
		int a,b;
		a=10,b=20;
		
		if( (a++ || ++b)  &&  (++a && ++b) ) {      //both statements will be tested bcoz first is true  	
				printf("Hello\n");
		}
		if( (a++ || ++b)  ||  (++a && ++b) ) {	   //no need to check next one bcoz first is true =>statement is  true	
					
				printf("Hii\n");
		}

	printf("a= %d\n",a);//13
	printf("b= %d\n\n",b);//21

}


/*-------------------------------------------------------------------------------------------------------------------------------

if( (a++ || ++b) && (++a && ++b) )    	|1.a++ || ++b			|			| second should be calculated 
					|  10  ||  ++b = T		|	a=[11],b[20]	| bcoz first one is true
  					|				|			|	
					|      AND			|			|
					|				|			|	
					|2. ++a && ++b			|			|
					|    T  && T			|	a[12],b[21]	|
					|   12 && 21			|			|
					|				|			|
--------------------------------------------------------------------------------------------------------------------------------
if( (a++ || ++b)  ||  (++a && ++b) ) 	|				|			|no need to calculate 		
					|1.a++ || ++b			|			|the second one	bcoz they are	
					|  12  ||  ++b = T		|	a=[13],b[21]	|connected by OR
  					|				|			|
					|	OR			|			|
					|2. ++a && ++b			|			|	
					|    T  && T			|			|	
					|    				|			|
-------------------------------------------------------------------------------------------------------------------------------*/






