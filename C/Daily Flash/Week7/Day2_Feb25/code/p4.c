/*1  2  3  4  
4  1  2  3  
3  4  1  2  
2  3  4  1 
*/

#include <stdio.h>
void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d", &row);

	int num=1;	//extra var to print num
	for (int outer = 0; outer < row; outer++) {
		for(int inner = 0; inner < row; inner++) {
			if(inner >= outer) {
				if(inner == outer )
					num=1;
				printf("%d  ",num);
				num++;
			}
			else {
				if(inner == 0)
					num--;
				printf("%d  ",num);
				num++;
			}
		}
		printf("\n");
	}
}
