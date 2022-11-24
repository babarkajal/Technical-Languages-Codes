#include<stdio.h>

void main(){
		int num;
		scanf("%d",&num);
		int mod,div;
		int cube=1;
			

		for(int i=1; i <=num ;i++){
		                  
		    for(div=i;div!=0;div /=10){
			mod = div % 10;//gives the last digit
			cube = mod * mod * mod;
			addCube = addCube + cube;
			
		}
	
                if(i==addcube)
                        printf("%d\n",i);
               }
 }
			                          
			                      
			                        
					
