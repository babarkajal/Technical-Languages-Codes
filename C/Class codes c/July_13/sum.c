//print sum of three numbers entereed through the command line

#include<stdio.h>

void main(int argc ,char *argv[]){
	
		int sum=0;
		for(int i=1; i<argc; i++){
			sum=sum+atoi(argv[i]);
		}
		printf("sum=%d\n",sum);
}
	
	
