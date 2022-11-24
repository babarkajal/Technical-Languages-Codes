int printf(const char*,...);

void main() {	
		int a,b;
		a=10,b=20;
		
		if( (a++ < 10)  &&  (++a && ++b) ) {      //first is false then condition is false 	
				printf("Hello\n");
		}
		if( (b++ <= 20)  ||  (++a && ++b) ) {	   //check second condition bcoz first is false	
					
				printf("Hii\n");
		}

	printf("a= %d\n",a);//11
	printf("b= %d\n\n",b);//21

}


/*-------------------------------------------------------------------------------------------------------------------------------

 if( (a++ < 10) && (++a && ++b) )    	|1.  a++ < 10			|			|first is false .when any cond- 
					|    10 < 10=F			|	a=[11],b[20]	|tion is false in 'And' then over
  					|				|			|all expression is false.no	
					|      AND			|			|need to check further
					|				|			|	
					|2. ++a && ++b			|			|
					|    				|			|
					|   				|			|
					|				|			|
--------------------------------------------------------------------------------------------------------------------------------
if( (b++ <= 20)  ||  (++a && ++b) ) 	
				 	|				|			|no need to calculate 		
					|1.b++ <= 20			|			|the second one	bcoz they are	
					|   20 <= 20 = T		|	a=[11],b[21]	|connected by OR
  					|				|			|
					|	OR			|			|
					|2. ++a && ++b			|			|	
					|    				|			|	
					|    				|			|
-------------------------------------------------------------------------------------------------------------------------------*/






