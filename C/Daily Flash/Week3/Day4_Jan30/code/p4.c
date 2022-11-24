/*
 * Program 4: Write a Program to Print following Pattern.
7
7 6 
6 5 4
4 3 2 1
*/

#include<stdio.h>

void main() {
	
	 /* var = external var to store value
	 */

	int var;
	

	/*assign var to the value var = 7
	* i.e. for var will holds the value 7,7,6,4 as per our pattern
	*/

	var = 7;
	for(int olc=0; olc< 4; olc++) {

			

		for(int ilc=0; ilc<=olc; ilc++) {
			printf("%d ", var);
			var--;		
		}
		var = var+1;
		printf("\n");
	}


}
