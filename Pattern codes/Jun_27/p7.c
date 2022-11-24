#include<stdio.h>

void main(){
	int num,var=1;
	printf("Enter row number: ");
	scanf("%d",&num);
	
	
	for(int olc=1; olc<=num; olc++){
		for(int ilc=1; ilc<=num*2-1; ilc++){
			if(ilc==1 || ilc==num || ilc==num-1){
				
					printf("%d",num++);
			}
			else
					printf(" ");
			if(num==6)
				break;
		}
		
		printf("\n");
	}
}	
				
