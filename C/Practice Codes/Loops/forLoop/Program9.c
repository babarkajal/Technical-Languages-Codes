#include<stdio.h>

void main()  {

	int start;
	int end;

	printf("Enter range start and end\n");

	scanf("%d%d",&start,&end);
/*
 //Sol1:
	for (int i=start;i<=end;end-=2){
	

		printf("%d ",end);
	}
*/	

	/*
//Sol2:
	for(int i=end;i>=start;i-=2)  {


		printf("%d ",i);
	}
	*/
/*
 //Sol3:
	int e=end;
	for(int i=start;i<=end;i+=2)  {

		printf("%d ",e);
		e-=2;
	}
	*/
	
//Sol4:	
	for(int i=start;i<=end;i+=2)  {

		printf("%d ",start+15);
		start-=2;
	}
	printf("\n");
}
