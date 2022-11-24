#include<stdio.h>
 

            


	void main() {

 	    int a=10,b=10,ans=0;		    
         
 	       ans = ++a + ++a / ++b * a++ - b++;
		// unary operator always have higher precedence than binary operator
		// so first in this expression pre and post inc will be evalutes first then / and then +,- 
	      	/*      = a + ++a / ++b * a++ - b++     //++a return reference and inc value a = 11
            		= a + a / ++b * a++ - b++     //++a return reference and inc value a = 12
            		= a + a / b * a++ - b++     //++b return reference and inc value b = 11
            		= a + a/b * 12 - b++         // a++ returns value first and then inc a = 13
            		= a + a/b * 12 - 11           //b++ returns value first and then inc b = 12
            		= 13 + 13 / 12 * 12 - 11         // / and * have highest priority then + and -
            		= 13+ 1 * 12 - 11
            		= 13 + 12-11
			= 13+1
			= 14
    		*/ 
	       
	       
	       printf("%d %d %d \n",a,b,ans);

	}

