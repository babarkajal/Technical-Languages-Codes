/*Program 4: Write a Program to Print following Pattern.
3
2 3 
1 2 3
0 1 2 3
*/


#include <stdio.h>

void main() {
	/* row:- input from user for row count
	 * var = external var to store value
	 */

	int row, var;
	
	/*do-while to check condtion that rows should be non-Negative and greater than Zero
	 */
	do {
		printf("Enter rows: ");
		scanf("%d",&row);
		
		//if statement to print error msg	 
		if(row <=0) 
			printf("Entered value is less or equal to zero\n");
	}while(row<=0);

	for(int olc=0; olc< row; olc++) {

		/*assign var to the value row-i-1
		 * i.e. for rows var will holds the value 3,2,1,0 as per our pattern
		 */
			
		var = row-olc-1;
		for(int ilc=0; ilc<=olc; ilc++) {
			printf("%d ", var);
			var++;		
		}
		printf("\n");
	}


}
