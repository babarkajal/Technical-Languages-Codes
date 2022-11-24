#include<stdio.h>

void main(){
	printf("print prime numbers ranging between 1 to 50:\n");
	int count,j;
	for(int i=2; i<=50; i++){
			count=0;
			j=1;
			while(j<=i/2){
				if(i%j==0)
					count++;
				j++;
			}
			if(count==1)
				printf("%d\t",i);
	}
	printf("\n");
}
