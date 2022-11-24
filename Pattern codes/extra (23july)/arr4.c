#include<stdio.h>
void main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j<=4){
				printf("\t");
			}
			else{
				printf("*\t\t");
			}
		}
		printf("\n");
	}
}
