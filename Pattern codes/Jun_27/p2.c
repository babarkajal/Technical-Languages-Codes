#include<stdio.h>

void main(){
	int n,num;
	printf("Enter number of rows: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		num=1;
		for(int j=1; j<=n ;j++){
			
			if(i+j>=n+1){	
				printf("%d",num++);
			}
			else
				printf(" ");
		}
		
		printf("\n");
	}
		for(int i=30;i<=36;i++)
		printf("\031[%dmHello\n",i);
}
