#include<stdio.h>

void main(){
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int var;

	for(int olc=1; olc<=n; olc++){
		var=1;
		for(int ilc=1; ;ilc++){
			
			if(ilc+olc >= n+1){
				printf("\033[%dm%d",30+olc,var);
				var++;
			}
			else
				printf(" ");
			if(var==n+1)
				break;
		}
		printf("\n");
	}
}
		
		
