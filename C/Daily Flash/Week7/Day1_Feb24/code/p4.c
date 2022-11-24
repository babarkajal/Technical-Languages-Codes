/*0  0  0  0  0  
   1  2  3  4  
      4  6  8  
         9  12  
            16
	*/

#include <stdio.h>

void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d", &row);

	for (int outer = 0; outer < row; outer++) {
		for(int inner = 0; inner < row; inner++) {

			if(inner >= outer)
				printf("%d  ", inner*outer);
			else 
				printf("   ");
		}
		printf("\n");
	}
}
